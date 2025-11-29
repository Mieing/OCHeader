@interface AWEVideoCoverEditHistoryNetworkHelper : NSObject

+ (void)uploadHistoryTemplateId:(id)a0 userSetting:(id)a1 isLandscape:(BOOL)a2 isVideoImageOpt:(BOOL)a3 pannelName:(id)a4 completion:(id /* block */)a5;
+ (void)fetchHistoryTemplateListWithIsLandscape:(BOOL)a0 isVideoImageOpt:(BOOL)a1 completion:(id /* block */)a2;
+ (id)get:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)post:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)fetchHistoryTextTemplateListWithPannelName:(id)a0 isNLE:(BOOL)a1 completion:(id /* block */)a2;

@end
