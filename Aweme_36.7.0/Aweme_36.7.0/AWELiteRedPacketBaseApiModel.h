@class NSString;

@interface AWELiteRedPacketBaseApiModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *requestId;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
