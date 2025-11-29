@class NSString, IESLiveFaceGiftStore;

@interface IESLiveFaceGiftFragment : IESLiveRoomComponent <IESLiveFaceGiftRouter, IESLiveFaceGiftExternalMgrRouter>

@property (retain, nonatomic) IESLiveFaceGiftStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (BOOL)injectFaceGiftExternal:(id)a0;
- (BOOL)cancelInjectFaceGiftExternal:(id)a0;
- (void)playFaceGiftWithSticker:(id)a0;
- (BOOL)ablePlayFaceGiftWithModel:(id)a0 giftMsg:(id)a1;
- (void).cxx_destruct;

@end
