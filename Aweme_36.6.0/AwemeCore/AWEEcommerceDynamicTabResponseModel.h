@class AWESearchTabGuideResponse, NSArray, NSString, AWESearchTabSelectedInfo, AWESearchMerchandiseTabGuideResponse;

@interface AWEEcommerceDynamicTabResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *tabs;
@property (copy, nonatomic) NSString *originTabList;
@property (nonatomic) BOOL needHideTab;
@property (retain, nonatomic) AWESearchTabGuideResponse *guide;
@property (retain, nonatomic) AWESearchMerchandiseTabGuideResponse *merchandiseTabGuide;
@property (nonatomic) BOOL showTabFilterCard;
@property (retain, nonatomic) AWESearchTabSelectedInfo *selected;

+ (id)tabsJSONTransformer;
+ (id)guideJSONTransformer;
+ (id)merchandiseTabGuideJSONTransformer;
+ (id)selectedJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
