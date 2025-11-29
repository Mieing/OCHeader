@class NSString;

@interface AWEUGRedBadgeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long show;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long ruleId;
@property (nonatomic) long long nextQueryInterval;
@property (copy, nonatomic) NSString *abVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
