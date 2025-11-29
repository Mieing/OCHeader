@class NSString, NSArray;

@interface AWEEnterpriseToolsBubbleModel : AWEBaseApiModel <AWEEnterpriseToolsBubbleModelProtocol>

@property (nonatomic) long long linkType;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *image;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *price;
@property (nonatomic) long long createTime;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *originPrice;
@property (copy, nonatomic) NSString *uniqueKey;
@property (nonatomic) BOOL isCommonTool;
@property (copy, nonatomic) NSString *postAwemeData;
@property (copy, nonatomic) NSString *lightIconUrl;
@property (copy, nonatomic) NSString *lightSelectedIconUrl;
@property (copy, nonatomic) NSString *darkIconUrl;
@property (copy, nonatomic) NSString *darkSelectedIconUrl;
@property (copy, nonatomic) NSString *menuName;
@property (copy, nonatomic) NSString *menuKey;
@property (copy, nonatomic) NSArray *uniqueIds;
@property (nonatomic) long long source;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long anchorType;
@property (copy, nonatomic) NSString *couponActivityId;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isDefaultBubble;
@property (nonatomic) BOOL isShownBefore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)JSONDictionary;

@end
