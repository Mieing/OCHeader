@class NSString, NSDictionary;

@interface APCDTOAnchor : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *reserved_kw_id;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *passive;
@property (nonatomic) long long interactionType;
@property (copy, nonatomic) NSDictionary *publishParams;
@property (copy, nonatomic) NSDictionary *anchorTrackParams;
@property (copy, nonatomic) NSString *undeletableToast;
@property (copy, nonatomic) NSString *openUrl;
@property (nonatomic) long long isDeletable;
@property (nonatomic) long long isClickable;
@property (nonatomic) long long subType;
@property (copy, nonatomic) NSString *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interactionTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
