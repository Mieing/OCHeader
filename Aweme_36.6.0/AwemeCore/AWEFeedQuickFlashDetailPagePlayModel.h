@class NSString;

@interface AWEFeedQuickFlashDetailPagePlayModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *btnLeftIcon;
@property (copy, nonatomic) NSString *layoutSchema;
@property (copy, nonatomic) NSString *btnSchema;
@property (copy, nonatomic) NSString *mobJsonString;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *cover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
