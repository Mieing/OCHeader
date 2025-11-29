@class NSString;

@interface AWEFeedPlayableLightTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *maskLynx;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
