@class NSString, NSMapTable;

@interface IESLiveAioLinkRouterImpl : NSObject <IESLiveAioLinkRouter>

@property (retain, nonatomic) NSMapTable *lynxIdToDelegateMap;
@property (retain, nonatomic) NSMapTable *hybridVCMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictFromQueryString:(id)a0;
- (BOOL)openSchema:(id)a0;
- (void)closeSelf;
- (id)finalSchema:(id)a0 schemaParams:(id)a1;
- (id)openDialog:(id)a0 config:(id)a1;
- (id)openHybridDialog:(id)a0;
- (id)observeUIHandleStatus:(id)a0;
- (id)getCurrentHybridVC:(id)a0;
- (void).cxx_destruct;

@end
