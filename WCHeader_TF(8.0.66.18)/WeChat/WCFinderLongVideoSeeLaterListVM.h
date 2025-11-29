@class NSString, NSMutableDictionary, NSData, WCFinderListLoadingStateModel, WCFinderFeedArray;

@interface WCFinderLongVideoSeeLaterListVM : NSObject <WCFinderSeeLaterExt>

@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) WCFinderListLoadingStateModel *loadingState;
@property (copy, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSString *fromSessionID;
@property (retain, nonatomic) NSMutableDictionary *cellHeightDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithInitialData:(id)a0 lastBuffer:(id)a1 continueFlag:(BOOL)a2 fromSessionID:(id)a3;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)contentVMWithIndexPath:(id)a0;
- (id)snapshot;
- (void)requestFirstPageIfNeed;
- (void)requestNextPage;
- (void)requestData:(unsigned long long)a0;
- (int)commentScene;
- (void)onSeeLaterStateChanged:(BOOL)a0 withDataItem:(id)a1;
- (void).cxx_destruct;

@end
