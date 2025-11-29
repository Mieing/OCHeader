@class NSString;

@interface MPChannelTopBarInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *logoUrl;
@property (nonatomic) unsigned long long appDebugModeType;
@property (nonatomic) unsigned int funcVersion;
@property (nonatomic) BOOL isDotNotice;
@property (copy, nonatomic) NSString *defaultLogoUrl;
@property (copy, nonatomic) NSString *dataBuffer;
@property (copy, nonatomic) NSString *syncBuffer;
@property (nonatomic) unsigned int iconType;
@property (copy, nonatomic) NSString *defaultTitle;
@property (nonatomic) unsigned int titleType;
@property (nonatomic) BOOL showGreenDot;
@property (copy, nonatomic) NSString *informMsgCnt;
@property (nonatomic) BOOL showSmallIcon;
@property (copy, nonatomic) NSString *smallIconUrl;
@property (copy, nonatomic) NSString *appPath;
@property (copy, nonatomic) NSString *dmLogoUrl;
@property (copy, nonatomic) NSString *dmDefaultLogoUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_logoUrl;
+ (void)PBArrayAdd_appDebugModeType;
+ (void)PBArrayAdd_funcVersion;
+ (void)PBArrayAdd_isDotNotice;
+ (void)PBArrayAdd_defaultLogoUrl;
+ (void)PBArrayAdd_dataBuffer;
+ (void)PBArrayAdd_syncBuffer;
+ (void)PBArrayAdd_iconType;
+ (void)PBArrayAdd_defaultTitle;
+ (void)PBArrayAdd_titleType;
+ (void)PBArrayAdd_appPath;
+ (void)PBArrayAdd_showGreenDot;
+ (void)PBArrayAdd_informMsgCnt;
+ (void)PBArrayAdd_showSmallIcon;
+ (void)PBArrayAdd_smallIconUrl;
+ (void)PBArrayAdd_dmLogoUrl;
+ (void)PBArrayAdd_dmDefaultLogoUrl;
+ (void)initialize;

@end
