@class AWENearbyHalfStyleRichArrowSetting, NSString, AWEURLModel;

@interface AWENearbyHalfStyleConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWEURLModel *targetImgUrl;
@property (nonatomic) unsigned long long arrowStyle;
@property (nonatomic) unsigned long long layoutAdaptType;
@property (copy, nonatomic) AWEURLModel *arrowHeadImgUrl;
@property (copy, nonatomic) AWEURLModel *arrowNockImgUrl;
@property (copy, nonatomic) AWENearbyHalfStyleRichArrowSetting *richArrowSettings;
@property (nonatomic) BOOL sloganDisable;
@property (nonatomic) double targetImageWidth;
@property (nonatomic) double targetImageHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
