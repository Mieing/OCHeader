@class NSString;

@interface IESECMallCategoryTabBubbleInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long marType;
@property (copy, nonatomic) NSString *bubbleKey;
@property (copy, nonatomic) NSString *bubbleText;
@property (nonatomic) BOOL isBubbleShowing;
@property (nonatomic) BOOL isReddotShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
