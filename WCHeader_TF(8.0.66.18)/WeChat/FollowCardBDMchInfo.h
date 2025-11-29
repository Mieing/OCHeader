@class NSString, PopUpWindowInfo;

@interface FollowCardBDMchInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int isFollowedCardbdMch;
@property (retain, nonatomic) NSString *followTips;
@property (retain, nonatomic) NSString *followLogo;
@property (retain, nonatomic) NSString *followTipsColor;
@property (nonatomic) unsigned long long followTipsSize;
@property (retain, nonatomic) NSString *followParam;
@property (nonatomic) unsigned int isShowPopUp;
@property (retain, nonatomic) PopUpWindowInfo *popUpWindowInfo;
@property (retain, nonatomic) NSString *followLogoAfter;
@property (retain, nonatomic) NSString *followTipsColorAfter;
@property (retain, nonatomic) NSString *followTipsAfter;

+ (void)initialize;

@end
