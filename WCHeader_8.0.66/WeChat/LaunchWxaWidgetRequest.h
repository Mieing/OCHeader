@class BaseRequest, NSString, WxaWidgetBaseInfo;

@interface LaunchWxaWidgetRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int requestType;
@property (retain, nonatomic) WxaWidgetBaseInfo *wxaWidgetInfo;

+ (void)initialize;

@end
