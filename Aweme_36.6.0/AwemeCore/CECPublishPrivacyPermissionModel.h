@interface CECPublishPrivacyPermissionModel : AWEBaseApiModel

@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL isDefaultedSelected;
@property (nonatomic) BOOL isRecorded;

+ (id)JSONKeyPathsByPropertyKey;

@end
