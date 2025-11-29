@interface OpenApiMgrHelper : NSObject

+ (id)cutWebSendAppMsgThumbData:(id)a0 minSideLen:(int)a1 minDataLen:(int)a2;
+ (id)FormTextMsg:(id)a0 withText:(id)a1 appID:(id)a2;
+ (id)FormAppMessage:(id)a0 withAppMessage:(id)a1 appID:(id)a2;
+ (id)FormMessage:(id)a0 withAppData:(id)a1 withAppId:(id)a2 redirectUrl:(id)a3;
+ (id)createConfirmLogicHelper:(id)a0 withAppData:(id)a1 withAppId:(id)a2 showTextView:(BOOL)a3 appScene:(unsigned int)a4 redirectUrl:(id)a5;
+ (id)createConfirmLogicHelper:(id)a0 withAppData:(id)a1 withAppId:(id)a2 showTextView:(BOOL)a3 appScene:(unsigned int)a4;
+ (BOOL)isLogin;
+ (id)makeFileAppCommunicateData:(id)a0;
+ (void)makeFileInternalMessage:(id)a0;
+ (id)makeMediaMessageForShareTo3rdApp:(id)a0 withType:(long long)a1;
+ (id)makeLocationMessageForShareTo3rdAppWithLatitude:(double)a0 andLongitude:(double)a1 title:(id)a2;
+ (id)makeTextMessageForShareTo3rdApp:(id)a0;
+ (id)makeURLMessageForShareTo3rdApp:(id)a0 withTitle:(id)a1;
+ (void)hideChatViewKeyborad;
+ (void)checkShowTabbar;
+ (id)getNetWorkErrorHtml;
+ (id)checkAppMsgThumbData:(id)a0;
+ (id)checkWebSendAppMsgThumbData:(id)a0;
+ (id)checkWebSendAppMsgThumbData:(id)a0 minSideLen:(int)a1 minDataLen:(int)a2;
+ (id)parseURLParamsByDecodeOnce:(id)a0;
+ (id)parseURLParams:(id)a0;
+ (id)transferImageDataToTargetSize:(id)a0;
+ (id)createMusicVideoCDNMediaInfo:(id)a0;
+ (void)asyncFormVideoMessageWithVideoData:(id)a0 param:(id)a1 callback:(id /* block */)a2;
+ (id)formVideoMessageWithVideoData:(id)a0 param:(id)a1;
+ (id)genBaseVideoMsgWithMediaMessage:(id)a0 appId:(id)a1;
+ (id)genCaptureVideoInfoWithVideoData:(id)a0 mediaMessage:(id)a1 param:(id)a2;
+ (BOOL)saveLocalData:(id)a0 toPath:(id)a1;
+ (id)getTmpOpenApiVideoPathWithData:(id)a0 videoType:(unsigned int)a1;
+ (long long)getVideoDurationFromVideoPath:(id)a0;

@end
