@class NSString, NSMutableArray;

@interface JSApiScopeAuthorizeInfo : WAAuthorizeSheetInfo

@property (retain, nonatomic) NSMutableArray *avatarInfoList;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) BOOL isBanModifyAvatar;
@property (nonatomic) unsigned int avatarLimit;
@property (nonatomic) unsigned int defaultAvatarId;
@property (retain, nonatomic) NSString *defaultHeadimgUrl;
@property (retain, nonatomic) NSString *defaultHeadimgFileid;
@property (retain, nonatomic) NSString *addAvatarBtnNormalWording;
@property (retain, nonatomic) NSString *addAvatarBtnLimitWording;

- (void).cxx_destruct;

@end
