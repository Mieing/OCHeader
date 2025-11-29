@class NSString, NSArray, NSData, WCFinderHotWordsTriggerInfo, NSMutableArray;
@protocol WCFinderHotWordsFeedViewModelDelegate;

@interface WCFinderHotWordsFeedViewModel : NSObject

@property (retain, nonatomic) WCFinderHotWordsTriggerInfo *triggerInfo;
@property (retain, nonatomic) NSMutableArray *mutableContentVMS;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *dataScene;
@property (nonatomic) int streamScene;
@property (weak, nonatomic) id<WCFinderHotWordsFeedViewModelDelegate> delegate;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) NSArray *contentVMS;
@property (readonly, nonatomic) BOOL canLoadMore;

- (id)initWithTriggerInfo:(id)a0 commentScene:(int)a1 dataScene:(id)a2 streamScene:(int)a3;
- (id)init;
- (void)requestFirstPage;
- (void)requestNextPage;
- (void)appendDataItem:(id)a0;
- (BOOL)couldFetchNextPage;
- (id)listViewModelWithScene:(int)a0 dataScene:(id)a1;
- (void).cxx_destruct;

@end
