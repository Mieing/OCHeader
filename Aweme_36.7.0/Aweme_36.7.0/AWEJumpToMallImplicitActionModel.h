@class NSString;

@interface AWEJumpToMallImplicitActionModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (nonatomic) long long level;
@property (nonatomic) long long targetPageType;
@property (copy, nonatomic) NSString *sameBlockName;
@property (nonatomic) BOOL supportTab;
@property (nonatomic) BOOL supportLeftSlide;
@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *trafficFrom;
@property (copy, nonatomic) NSString *isStronglyRecommend;
@property (nonatomic) BOOL supportLeftSlideEnterStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
