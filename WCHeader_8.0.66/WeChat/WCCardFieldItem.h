@class NSString, WCGiftCardInfo;

@interface WCCardFieldItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *auxTitle;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *primaryColor;
@property (retain, nonatomic) NSString *secondaryColor;
@property (nonatomic) unsigned int showflag;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) WCGiftCardInfo *giftCardInfo;
@property (retain, nonatomic) NSString *appBrandUserName;
@property (retain, nonatomic) NSString *appBrandPass;
@property (retain, nonatomic) NSString *cellIconUrl;
@property (retain, nonatomic) NSString *cellLinkIconUrl;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *cellCoverUrl;
@property (retain, nonatomic) NSString *cellCenterIconUrl;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *nonceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_auxTitle;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_showflag;
+ (void)PBArrayAdd_primaryColor;
+ (void)PBArrayAdd_secondaryColor;
+ (void)initialize;

@end
