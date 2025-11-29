@class NSString, NSDictionary, AWENearbyGrouponCommonFrequencyData;

@interface AWENearbyInnerPushModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long topBannerType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSDictionary *action;
@property (copy, nonatomic) NSDictionary *button;
@property (copy, nonatomic) NSString *showName;
@property (copy, nonatomic) AWENearbyGrouponCommonFrequencyData *frequencyData;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) long long pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
