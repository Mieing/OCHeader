@class NSString;

@interface ACCCheckRedpacketStatusCheckResponseData : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long redpacketStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
