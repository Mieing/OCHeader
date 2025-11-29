@class NSString, NSData, WCFinderPOIParamsModel, NSMutableArray;
@protocol WCFinderProfilePOISearchViewModelDelegate;

@interface WCFinderProfilePOISearchViewModel : NSObject

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) WCFinderPOIParamsModel *poiParamsModel;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *searchInfos;
@property (retain, nonatomic) NSMutableArray *relativeInfos;
@property (weak, nonatomic) id<WCFinderProfilePOISearchViewModelDelegate> delegate;
@property (nonatomic) BOOL isSearchModel;
@property (retain, nonatomic) NSMutableArray *allInfos;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) int viewScene;

- (id)initWithFinderUsername:(id)a0;
- (BOOL)isAuthor;
- (void)searchPOIWithQuery:(id)a0;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)fetchDataWithLastBuffer:(id)a0;
- (void).cxx_destruct;

@end
