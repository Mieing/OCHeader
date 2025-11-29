@class NSString;

@interface IESLiveStreamPlayerLayoutAnchorVideoPlay : IESLiveStreamPlayerLayoutBase <IESLiveSEIListener>

@property (nonatomic) BOOL shouldUseCurrentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (BOOL)layoutWithMetaInfo:(id)a0;
- (id)supportRoomScenes;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;

@end
