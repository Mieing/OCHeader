@class NSString;

@interface AWEFCoinTaskDataBubble : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *bubbleTitle;
@property (copy, nonatomic) NSString *bubbleSubtitle;
@property (copy, nonatomic) NSString *bubbleURL;
@property (nonatomic) long long bubbleShowDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
