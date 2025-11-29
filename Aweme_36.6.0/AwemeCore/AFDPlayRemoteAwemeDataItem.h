@class NSArray, NSString, AWEAwemeModel, NSNumber, NSMutableArray;
@protocol AFDPlayRemoteAwemeDataItemDelegate;

@interface AFDPlayRemoteAwemeDataItem : NSObject <AFDPlayRemoteAwemeDataItemProtocol>

@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) long long currentAwemeProgress;
@property (copy, nonatomic) NSArray *awemeProgress;
@property (nonatomic) BOOL isPause;
@property (retain, nonatomic) NSNumber *currentAwemeSpeed;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSMutableArray *awemeList;
@property (nonatomic) long long currentPlayIndex;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isHost;
@property (nonatomic) BOOL opStatus;
@property (retain, nonatomic) NSString *currentContentString;
@property (copy, nonatomic) id /* block */ didScrollToModel;
@property (weak, nonatomic) id<AFDPlayRemoteAwemeDataItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearAwemeList;
- (void)scrollToAwemeModel:(id)a0;
- (id)findModelWithItemID:(id)a0;
- (void)removeAwemeModelAndScrollToNext:(id)a0;
- (void)scrollToNextAwemeModel:(id)a0;
- (BOOL)scrollToLastAwemeModel:(id)a0;
- (void)insertAwemeList:(id)a0 currentID:(id)a1;
- (void)updateAwemeModelIndex:(id)a0;
- (void)replaceAwemeModel:(id)a0 withModel:(id)a1;
- (BOOL)containsAweme:(id)a0;
- (BOOL)playRemoteEnableProgressSlider;
- (id)__awemeIDListFromAwemeModels:(id)a0;
- (void)__log:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
