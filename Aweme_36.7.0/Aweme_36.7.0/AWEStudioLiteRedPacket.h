@class NSString;

@interface AWEStudioLiteRedPacket : NSObject <ACCStudioLiteRedPacket>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioLiteRedPacketAdapterClass;

- (BOOL)isDiaryShootway:(id)a0;
- (BOOL)isLiteRedPacketVideo:(id)a0;
- (id)publishTaskKey:(id)a0;
- (BOOL)isLiteRedPacketRecord:(id)a0;
- (id)quailtiyGuideTrackParams:(id)a0;
- (BOOL)editPageHidePostButton:(id)a0;
- (id)enterVideoEditPageParams:(id)a0;
- (id)recordPropType:(id)a0;
- (void)setIsRedPackTrueIfNeeded:(id)a0;
- (BOOL)stickerIsLiteRedPacket:(id)a0;
- (BOOL)liteAllowCompleteWithPublishModel:(id)a0 cameraService:(id)a1 modeService:(id)a2;
- (BOOL)liteRecordButtonShouldStopWithPublishModel:(id)a0;
- (BOOL)isDiaryShootwayLiteVideoDiaryTypeNormal:(id)a0;
- (BOOL)isRedPackAweme:(id)a0;
- (id)aAWEStudioLiteRedPacketAdapter;

@end
