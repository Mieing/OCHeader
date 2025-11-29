@class NSString, NSNumber;

@interface IESECCouponButtonSplitLineConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *splitLineColor;
@property (retain, nonatomic) NSNumber *splitLineHeight;
@property (nonatomic) unsigned long long splitLineType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
