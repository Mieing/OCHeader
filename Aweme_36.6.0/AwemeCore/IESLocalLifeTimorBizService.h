@class NSString;

@interface IESLocalLifeTimorBizService : HTSService <IESLocalLifeTimorBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timorSchemaCodecWithSchema:(id)a0 appendLog:(id)a1;
+ (void)preloadIronManWithSchemaString:(id)a0;
+ (void)preloadIronManWithSchemaList:(id)a0;
+ (id)ironManPluginCommonInfoParams;
+ (void)trackIronManWithSchema:(id)a0 event:(id)a1 scene:(id)a2 refer:(id)a3 carrier:(id)a4 groupId:(id)a5 authorId:(id)a6 extraInfo:(id)a7;


@end
