@class NSDictionary, NSString;

@interface AWEDTOAnchor : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *icon;
@property (copy, nonatomic) NSString *reserved_kw_id;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL passiveAnchor;
@property (nonatomic) long long passiveOptions;
@property (copy, nonatomic) NSDictionary *publishParams;
@property (copy, nonatomic) NSDictionary *lifePublishFinishParams;
@property (nonatomic) BOOL isSilentAdd;
@property (copy, nonatomic) NSDictionary *anchorTrackParams;
@property (nonatomic) long long subType;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL isClickable;
@property (copy, nonatomic) NSString *undeletableToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awe_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_draft;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
