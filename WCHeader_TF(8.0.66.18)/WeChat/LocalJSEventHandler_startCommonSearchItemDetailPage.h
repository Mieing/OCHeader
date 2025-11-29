@class WCDataItem, NSString;

@interface LocalJSEventHandler_startCommonSearchItemDetailPage : LocalJSEventHandler_BaseEvent <ServiceAuthExt>

@property (retain, nonatomic) WCDataItem *oDataItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCardFrame;
- (void)jumpNote;
- (void)jumpFinder;
- (void)jumpSightVideo;
- (void)jumpEmotionStore;
- (void)jumpPhoto;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
