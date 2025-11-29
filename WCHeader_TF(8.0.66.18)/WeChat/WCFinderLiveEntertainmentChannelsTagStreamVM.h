@class WCFinderFeedFlowView, NSString, WCFinderLiveEntertainmentChannelsContext, EntertainmentChannelsTagDataModel;
@protocol WCFinderLiveEntertainmentChannelsTagStreamVMDelegate;

@interface WCFinderLiveEntertainmentChannelsTagStreamVM : NSObject <WCFinderLiveExt>

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) WCFinderLiveEntertainmentChannelsContext *ctx;
@property (retain, nonatomic) NSString *themeTag;
@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) EntertainmentChannelsTagDataModel *dataModel;
@property (nonatomic) unsigned long long containerId;
@property (weak, nonatomic) id<WCFinderLiveEntertainmentChannelsTagStreamVMDelegate> delegate;
@property (readonly, nonatomic) BOOL continueFlag;
@property (readonly, nonatomic) BOOL isFetchingData;
@property (weak, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveDataItemAndExtraInfosWithContainerModels:(id)a0 commentScene:(int)a1 extraKey:(id)a2;

- (id)initWithContext:(id)a0 tag:(id)a1 initialContainer:(id)a2;
- (void)cancelAllCgi;
- (BOOL)hasNoData;
- (unsigned long long)numberOfItems;
- (void)fetchMoreData;
- (void)refreshDataFromTop;
- (void)fetchMoreDataWithPullType:(unsigned long long)a0;
- (id)createFeedVMWithModel:(id)a0;
- (void)updateState;
- (id)feedVMAtIndexPath:(id)a0;
- (unsigned long long)indexOfTid:(id)a0;
- (void)removeDataWithTid:(id)a0;
- (id)currentContainerLastBuffer;
- (id)currentContainerReadIds;
- (void).cxx_destruct;

@end
