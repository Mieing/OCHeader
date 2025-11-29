@class WebRecommendResponse_RecClientCache, NSString, RecPluginMsg, BaseResponse;

@interface WebRecommendResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int updateCode;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) NSString *json;
@property (retain, nonatomic) RecPluginMsg *pluginMsg;
@property (retain, nonatomic) WebRecommendResponse_RecClientCache *clientCache;
@property (nonatomic) unsigned int redDotTimeStamp;

+ (void)initialize;

@end
