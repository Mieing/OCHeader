@interface GameHaowanOpenSDKUtils : MMObject

+ (id)createViewControllerFromOpenSDKWithAppId:(id)a0 andExtra:(id)a1 andData:(id)a2 resultBlock:(id /* block */)a3;
+ (id)handleForVideoData:(id)a0 needEdit:(BOOL)a1 appId:(id)a2 gameInfo:(id)a3 source:(int)a4 block:(id /* block */)a5 resultBlock:(id /* block */)a6;
+ (id)buildUrlWithVideoInfo:(id)a0 appId:(id)a1 gameInfo:(id)a2 source:(int)a3;
+ (id)createWebViewController:(id)a0 videoUrl:(id)a1 thumbUrl:(id)a2 source:(int)a3 gameInfo:(id)a4;
+ (id)genPublishUrl:(id)a0 from:(int)a1 videoInfo:(id)a2 gameInfo:(id)a3;
+ (id)getViewControllerHandleMethod:(id)a0 param:(id)a1 appid:(id)a2 extraInfoDict:(id)a3 backToGameBlock:(id /* block */)a4;
+ (id)createViewControllerHandleMethod:(id)a0 param:(id)a1 appid:(id)a2 extraInfoDict:(id)a3 backToGameBlock:(id /* block */)a4;

@end
