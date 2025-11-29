@class NSString, AWERelatedVideoJumpConfirmParamModel, NSNumber, AWEURLModel;

@interface AWEXiguaRelatedBarModel : MTLModel <MTLJSONSerializing>

@property (class, nonatomic) BOOL enableFixTransformer;

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openUrl;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *openAppSchema;
@property (copy, nonatomic) NSString *rightDesc;
@property (copy, nonatomic) NSString *jumpConfirmTitle;
@property (retain, nonatomic) NSNumber *groupId;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *dyGroupId;
@property (retain, nonatomic) NSNumber *dyUserId;
@property (copy, nonatomic) NSString *videoType;
@property (retain, nonatomic) AWERelatedVideoJumpConfirmParamModel *jumpConfirmParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)jumpConfirmParamJSONTransformer;
+ (id)groupIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
