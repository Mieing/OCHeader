@class NSString;

@interface IESECRecommendFeedbackItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long trackEventType;
@property (copy, nonatomic) NSString *abbreviation;
@property (copy, nonatomic) NSString *moreText;
@property (nonatomic) BOOL shouldShowArrow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
