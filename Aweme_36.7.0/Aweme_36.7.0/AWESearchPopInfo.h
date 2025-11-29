@class NSString, NSNumber, NSDictionary;

@interface AWESearchPopInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *popName;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *reportUrl;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *commonLog;
@property (copy, nonatomic) NSString *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
