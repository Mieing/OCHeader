@class NSString, NSDictionary;

@interface AWESplashLongPressModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *guideIcon;
@property (nonatomic) long long disableFullScreenPress;
@property (copy, nonatomic) NSString *progressColor;
@property (nonatomic) long long duration;
@property (nonatomic) long long longClickPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
