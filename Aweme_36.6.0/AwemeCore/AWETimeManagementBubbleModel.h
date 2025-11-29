@class NSString;

@interface AWETimeManagementBubbleModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *bubbleTitle;
@property (readonly, nonatomic) long long bubbleShowLimit;
@property (readonly, copy, nonatomic) NSString *bubbleTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
