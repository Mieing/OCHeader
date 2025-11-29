@class NSString;

@interface AWEFeedActivityBubbleModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *componentID;
@property (readonly, nonatomic) long long startTime;
@property (readonly, nonatomic) long long endTime;
@property (readonly, copy, nonatomic) NSString *bubbleText;
@property (readonly, copy, nonatomic) NSString *bubbleID;
@property (copy, nonatomic) NSString *taskID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
