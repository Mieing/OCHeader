@class NSString, NSDictionary;

@interface AWESinglePayEpisodeDiversionXiguaResponse : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSString *modelJsonString;
@property (copy, nonatomic) NSDictionary *logPb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
