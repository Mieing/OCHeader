@class JsApiPalmImgInfo, JsApiPalmVideoInfo, NSString;

@interface JsApiPalmInfo : WXPBGeneratedMessage

@property (retain, nonatomic) JsApiPalmImgInfo *imgInfo;
@property (retain, nonatomic) JsApiPalmImgInfo *liveImgInfo;
@property (retain, nonatomic) JsApiPalmVideoInfo *liveVideoInfo;
@property (retain, nonatomic) NSString *statsInfo;

+ (void)initialize;

@end
