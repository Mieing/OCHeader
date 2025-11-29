@class NSString, NSNumber;

@interface AWEAdChallengeTaskButtonModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *tipText;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSNumber *enable;
@property (nonatomic) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
