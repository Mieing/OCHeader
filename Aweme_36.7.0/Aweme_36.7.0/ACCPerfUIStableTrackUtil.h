@interface ACCPerfUIStableTrackUtil : NSObject

+ (id)nodeKeyWithType:(unsigned long long)a0;
+ (id)allNodeKeyForModule:(id)a0;
+ (void)startUIStableTrackWithPublishModel:(id)a0 moduleKey:(id)a1;
+ (void)finishNodeWithType:(unsigned long long)a0 moduleKey:(id)a1;
+ (void)forceFinishAllNodeWithModuleKey:(id)a0;

@end
