@class NSString;

@interface UpdateWechatRedDotConfig : NSObject <PBCoding>

@property (retain, nonatomic) NSString *nsNewXml;
@property (nonatomic) unsigned int uiHasShowReddotlevel;
@property (retain, nonatomic) NSString *nsWording;
@property (retain, nonatomic) NSString *nsUrl;
@property (nonatomic) unsigned int uiClientVersion;
@property (nonatomic) unsigned int uiReddotlevel;
@property (nonatomic) unsigned int uiExpireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_uiHasShowReddotlevel;
+ (void)PBArrayAdd_nsNewXml;
+ (void)initialize;
+ (void)reportConfig:(id)a0 Opcode:(unsigned int)a1 OldConfig:(id)a2;
+ (void)receiveUpdateWechatRedDot:(id)a0;
+ (id)updateWechatRedDotPath;
+ (id)loadUpdateWechatRedDotConfig;
+ (void)saveUpdateWechatRedDotCofig:(id)a0;
+ (id)getUpdateWechatRedDotConfig;

- (id)getPBPropertyTable;
- (void)parseUpdateWechatRedDot:(id)a0;
- (BOOL)shouldMoreShowUpdateWechatRedDot;
- (BOOL)shouldSettingShowUpdateWechatRedDot;
- (BOOL)shouldAboutShowUpdateWechatRedDot;
- (BOOL)shouldUpdateShowUpdateWechatRedDot;
- (id)getUpdateWechatCellWording;
- (void)setMoreHasShowUpdateWechatRedDot;
- (void)setSettingHasShowUpdateWechatRedDot;
- (void)setAboutHasShowUpdateWechatRedDot;
- (void)setUpdateHasShowUpdateWechatRedDot;
- (void).cxx_destruct;

@end
