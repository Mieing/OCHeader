@interface ACCVideoInfoHelper : NSObject

+ (void)didLoadMetadata:(id)a0 forPublishModel:(id)a1 withLastSourceInfos:(id)a2 completion:(id /* block */)a3;
+ (BOOL)addSourceInfoForItem:(id)a0 withKey:(id)a1 withPublishModel:(id)a2;
+ (BOOL)needReportSourceInfo;
+ (void)getSourceInfoForPublishModel:(id)a0 completion:(id /* block */)a1;

@end
