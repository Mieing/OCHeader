@class NSString;

@interface AWEInnerPushUiInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long templateStyle;
@property (nonatomic) long long avatarType;
@property (nonatomic) long long avatarIconType;
@property (nonatomic) long long primaryTitleType;
@property (nonatomic) long long titleIconType;
@property (nonatomic) long long titleTagType;
@property (nonatomic) long long secondaryTitleType;
@property (nonatomic) long long primaryDescType;
@property (nonatomic) long long secondaryDescType;
@property (nonatomic) long long descIconType;
@property (nonatomic) long long actionAreaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
