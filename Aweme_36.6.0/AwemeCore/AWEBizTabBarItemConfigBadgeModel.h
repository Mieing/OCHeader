@class NSString, NSDictionary, NSArray;

@interface AWEBizTabBarItemConfigBadgeModel : AWEHPBaseComponentModel <AWEHPChannelBadgeModelProtocol, AWEMRChannelBadgeModelProtocol>

@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) unsigned long long entranceAnimationType;
@property (nonatomic) long long number;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL preCheck;
@property (retain, nonatomic) NSDictionary *interceptedParams;
@property (readonly, copy, nonatomic) NSDictionary *bizTrackParams;
@property (readonly, copy, nonatomic) id /* block */ bizTrackParamsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSArray *dynamicStrategies;

- (void)downGradeToRedDot;
- (id)initWithComponentID:(id)a0;
- (id)initWithComponentID:(id)a0 withNumber:(long long)a1;
- (id)initWithComponentID:(id)a0 withText:(id)a1;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
