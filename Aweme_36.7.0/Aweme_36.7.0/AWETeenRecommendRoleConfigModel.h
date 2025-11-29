@class NSString;

@interface AWETeenRecommendRoleConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *longPressPanelEntranceText;
@property (copy, nonatomic) NSString *longPressPanelBubbleText;
@property (copy, nonatomic) NSString *popupBackgroundImage;
@property (copy, nonatomic) NSString *firstRecommendTitle;
@property (copy, nonatomic) NSString *firstRecommendSubTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
