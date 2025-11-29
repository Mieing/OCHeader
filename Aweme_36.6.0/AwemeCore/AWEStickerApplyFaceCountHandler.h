@class NSString;

@interface AWEStickerApplyFaceCountHandler : AWEStickerApplyBaseHandler <ACCEffectEvent>

@property (nonatomic) BOOL needsFaceCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)camera:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)handlerDidBecomeActive;

@end
