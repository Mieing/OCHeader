@class NSString;

@interface IESGCPXPlayGameUtil : NSObject <IESGCPDIContextSubscriber, IESGCPXPlayGameCommonUtil>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterInvalidGameIconUrl:(id)a0;
+ (id)gamePlatformStringWithGamePlatform:(unsigned long long)a0;
+ (long long)promoteSceneWithPromoteSceneString:(id)a0;
+ (id)mockGameSchemaParamsIfNeeded:(id)a0;
+ (BOOL)isValidGameId:(id)a0;
+ (id)splitPackageNameAndChannelByGameId:(id)a0;
+ (long long)bootConfigSceneFromPromoteScene:(long long)a0;
+ (id)promoteSceneStringWithPromoteScene:(long long)a0;

- (void)didSetGameCPDIContext;
- (unsigned long long)supportInterfaceOrientationMask;
- (id)queueTypeWithQueueConfiguration:(id)a0;
- (BOOL)isValidSchemaParams:(id)a0;
- (id)queueEventDataFromConfiguration:(id)a0;

@end
