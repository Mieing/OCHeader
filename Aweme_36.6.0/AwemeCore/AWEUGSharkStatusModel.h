@class NSString;

@interface AWEUGSharkStatusModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *sharkData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
