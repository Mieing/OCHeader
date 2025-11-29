@class AWEUndertakeLinkProxyResult;

@interface AWEUndertakeLinkProxyResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUndertakeLinkProxyResult *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
