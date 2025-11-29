@class NSString, NSDictionary, UIView;

@interface IESECUIVerifyRule : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *exceptText;
@property (nonatomic) BOOL supportTruncation;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *btmID;
@property (weak, nonatomic) UIView *targetRuleView;
@property (copy, nonatomic) NSString *targetSliceKey;
@property (copy, nonatomic) NSDictionary *targetViewFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
