@class NSString, IESECCouponButtonElementModel, NSArray, IESECCouponButtonExtraModel, IESECLiveImageURLModel, IESECCouponButtonSplitLineConfig, NSDictionary, IESECCouponButtonTextConfig, IESECCouponButtonTrackModel, IESECCouponButtonColorConfig, NSNumber;

@interface IESECCouponButtonModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *leftText;
@property (retain, nonatomic) NSString *rightText;
@property (retain, nonatomic) IESECLiveImageURLModel *rightIconModel;
@property (retain, nonatomic) IESECCouponButtonExtraModel *extra;
@property (retain, nonatomic) NSNumber *textStyle;
@property (retain, nonatomic) NSNumber *colorStyle;
@property (retain, nonatomic) NSNumber *splitLineStyle;
@property (retain, nonatomic) IESECCouponButtonElementModel *leftElement;
@property (retain, nonatomic) NSArray *rightElements;
@property (retain, nonatomic) IESECCouponButtonTrackModel *tagTrack;
@property (retain, nonatomic) IESECCouponButtonTextConfig *textConfig;
@property (retain, nonatomic) IESECCouponButtonColorConfig *colorConfig;
@property (retain, nonatomic) IESECCouponButtonSplitLineConfig *splitLineConfig;
@property (retain, nonatomic) NSDictionary *couponShowConfig;
@property (nonatomic) BOOL disableShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraJSONTransformer;
+ (id)tagTrackJSONTransformer;
+ (id)rightElementsJSONTransformer;
+ (id)rightIconModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)newTextConfigWithStyle:(long long)a0;
- (void).cxx_destruct;

@end
