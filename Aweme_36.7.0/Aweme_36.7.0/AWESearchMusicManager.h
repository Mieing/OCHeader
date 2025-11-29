@class NSString, NSDictionary, AWEEMusicSearchGlobalDoodleConfigModel, NSMutableArray, UIViewController;
@protocol AWESearchCorrectModelProtocol;

@interface AWESearchMusicManager : NSObject

@property (retain, nonatomic) id previousTask;
@property (retain, nonatomic) id previousMusicVideoTask;
@property (nonatomic) long long curCursor;
@property (nonatomic) int curPage;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL keywordHitBlackList;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL sortByLyric;
@property (copy, nonatomic) NSString *searchSource;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) id /* block */ appendMusicBlock;
@property (nonatomic) BOOL shouldHideCorrection;
@property (copy, nonatomic) id<AWESearchCorrectModelProtocol> correctModel;
@property (retain, nonatomic) AWEEMusicSearchGlobalDoodleConfigModel *doodleConfig;
@property (weak, nonatomic) UIViewController *refViewController;

- (void)loadMore:(id /* block */)a0;
- (BOOL)isDataEmpty;
- (void)searchWithKeyword:(id)a0 shootType:(id)a1 shootDuration:(id)a2 searchSource:(id)a3 completion:(id /* block */)a4;
- (void)p_searchWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)sortByLyricWithMusics:(id)a0;
- (void)filterDuplicateMusics;
- (void)searchWithKeyword:(id)a0 searchSource:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)clear;

@end
