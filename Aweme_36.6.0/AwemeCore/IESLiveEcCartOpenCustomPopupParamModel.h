@class NSString, NSNumber, NSDictionary;

@interface IESLiveEcCartOpenCustomPopupParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *heightPercent;
@property (retain, nonatomic) NSNumber *bottomOffset;
@property (nonatomic) BOOL hasMask;
@property (copy, nonatomic) NSString *maskColor;
@property (nonatomic) BOOL maskClickDisable;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL enablePullUp;
@property (copy, nonatomic) NSString *closeTriggerEvent;
@property (copy, nonatomic) NSDictionary *closeTriggerParams;
@property (copy, nonatomic) NSString *popupCode;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
