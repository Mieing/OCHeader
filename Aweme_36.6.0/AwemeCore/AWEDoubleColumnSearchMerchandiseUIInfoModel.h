@class NSString;

@interface AWEDoubleColumnSearchMerchandiseUIInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long UIStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *preTitle;
@property (copy, nonatomic) NSString *bgImgUrl;
@property (copy, nonatomic) NSString *magnifierImgUrl;
@property (nonatomic) long long activityCardBottom;
@property (nonatomic) BOOL shouldReplaceQuery;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL isInRectangleBackground;
@property (nonatomic) unsigned long long cornerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
