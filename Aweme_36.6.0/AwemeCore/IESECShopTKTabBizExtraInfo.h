@class NSString, IESECShopTKHybridTabModel, NSArray, IESECURLModel, NSNumber, IESECShopProductTabModel;

@interface IESECShopTKTabBizExtraInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long liveStyle;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *tabHintText;
@property (retain, nonatomic) NSNumber *tabHintDuration;
@property (retain, nonatomic) IESECShopProductTabModel *productTab;
@property (retain, nonatomic) IESECShopTKHybridTabModel *hybridTab;
@property (copy, nonatomic) NSArray *globalComponents;
@property (nonatomic) unsigned long long tabStyleType;
@property (retain, nonatomic) IESECURLModel *immerseTabIcon;
@property (retain, nonatomic) IESECURLModel *immerseTabIconSelected;
@property (retain, nonatomic) IESECURLModel *tabIconWithoutBadge;
@property (copy, nonatomic) NSString *benefitType;
@property (copy, nonatomic) NSString *benefitDesc;
@property (copy, nonatomic) NSString *indicatorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
