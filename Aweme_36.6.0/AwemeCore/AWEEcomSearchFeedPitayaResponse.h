@class NSString, NSDictionary;

@interface AWEEcomSearchFeedPitayaResponse : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *pitayaTraceId;
@property (copy, nonatomic) NSDictionary *ptyAlgInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
