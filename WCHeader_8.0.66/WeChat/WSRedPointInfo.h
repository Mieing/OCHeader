@class NSString, FinderSyncTipsShowInfo;

@interface WSRedPointInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *msgid;
@property (nonatomic) BOOL bFFShowRedot;
@property (nonatomic) unsigned int entranceShowRed;
@property (nonatomic) unsigned int clientVersion;
@property (nonatomic) unsigned int h5TemplateVersion;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) unsigned int redotType;
@property (retain, nonatomic) NSString *reddotText;
@property (retain, nonatomic) NSString *reddotIcon;
@property (nonatomic) unsigned int redotTimeStamp;
@property (nonatomic) unsigned int recieveTime;
@property (nonatomic) int clear;
@property (nonatomic) BOOL bCheckedExpired;
@property (nonatomic) unsigned int reddotCount;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned int priority;
@property (retain, nonatomic) FinderSyncTipsShowInfo *tipsShowInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_msgid;
+ (void)PBArrayAdd_bFFShowRedot;
+ (void)PBArrayAdd_entranceShowRed;
+ (void)PBArrayAdd_clientVersion;
+ (void)PBArrayAdd_h5TemplateVersion;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_redotType;
+ (void)PBArrayAdd_reddotText;
+ (void)PBArrayAdd_reddotIcon;
+ (void)PBArrayAdd_redotTimeStamp;
+ (void)PBArrayAdd_recieveTime;
+ (void)PBArrayAdd_clear;
+ (void)PBArrayAdd_bCheckedExpired;
+ (void)PBArrayAdd_reddotCount;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_seq;
+ (void)PBArrayAdd_priority;
+ (void)PBArrayAdd_tipsShowInfo;
+ (void)initialize;
+ (id)parseFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)getPBPropertyTable;
- (BOOL)isWeSeeContentReddotType;
- (BOOL)isWeSeeFirstColumnReddotType;
- (BOOL)isWeSeeSecondColumnReddotType;
- (BOOL)isWeSeeThirdColumnReddotType;
- (BOOL)isTimeStampValid;
- (unsigned long long)getVisionType;
- (BOOL)isActive;
- (BOOL)hasIcon;
- (BOOL)hasText;
- (long long)tabCategory;
- (void).cxx_destruct;

@end
