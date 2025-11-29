@class NSNumber, NSString;

@interface IESECCouponButtonTextConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *buttonHeight;
@property (retain, nonatomic) NSNumber *textPadding;
@property (retain, nonatomic) NSNumber *textFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
