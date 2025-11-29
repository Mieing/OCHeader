@class NSString;

@interface ACCMusicVolumeBizHandlerDuet : NSObject <ACCMusicVolumeBizHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)setVoiceVolumeTo:(float)a0 withPublishModel:(id)a1;
+ (BOOL)setVoiceVolumeTo:(float)a0 withContext:(id)a1;


@end
