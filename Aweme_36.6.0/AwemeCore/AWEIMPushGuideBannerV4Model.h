@class NSString, NSArray, NSDictionary;

@interface AWEIMPushGuideBannerV4Model : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bannerTitle;
@property (copy, nonatomic) NSString *bannerContent;
@property (copy, nonatomic) NSString *negativeBtnText;
@property (copy, nonatomic) NSString *positiveBtnText;
@property (copy, nonatomic) NSString *iconUrlString;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *incentiveType;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *pushClickTrackInfo;
@property (nonatomic) long long bannerOptStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
