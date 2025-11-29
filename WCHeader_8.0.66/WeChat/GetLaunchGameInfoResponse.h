@class NSString, GetLiteAppInfo, GetWebViewInfo, AppStoreInfo, GameItem, BaseResponse;

@interface GetLaunchGameInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) GameItem *gameInfo;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) AppStoreInfo *appStore;
@property (retain, nonatomic) GetLiteAppInfo *liteApp;
@property (retain, nonatomic) GetWebViewInfo *webview;

+ (void)initialize;

@end
