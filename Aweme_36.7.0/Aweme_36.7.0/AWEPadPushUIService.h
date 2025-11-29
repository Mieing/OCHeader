@class NSString;

@interface AWEPadPushUIService : HTSService <AWEPadPushUIService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adaptEnable;
- (void)updateFrame:(id)a0 height:(double)a1 isDismissing:(BOOL)a2;
- (id)createCornerLayerWithView:(id)a0 height:(double)a1 isPushFromBottom:(BOOL)a2;
- (void)setHidedFrame:(id)a0 height:(double)a1;
- (double)pushViewCommonHeight;
- (double)pushViewCommonWidth;
- (id)pushViewHidedFrameValueWithHeight:(double)a0;
- (id)pushViewShownFrameValueWithHeight:(double)a0;
- (void)performBlock:(id /* block */)a0;

@end
