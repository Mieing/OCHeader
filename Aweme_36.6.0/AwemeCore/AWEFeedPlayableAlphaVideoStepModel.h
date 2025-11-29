@class NSString;

@interface AWEFeedPlayableAlphaVideoStepModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *time;
@property (copy, nonatomic) NSString *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
