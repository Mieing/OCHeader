@class NSString;

@interface DBContactLocal : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) unsigned int chatState;
@property (nonatomic) unsigned int needUpdate;
@property (retain, nonatomic) NSString *mobileIdentify;
@property (nonatomic) unsigned int metaFlag;
@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned int lastModifyTime;
@property (nonatomic) unsigned int localCommonFlag;
@property (retain, nonatomic) NSString *openIMPrivacyAgreementUrl;
@property (nonatomic) unsigned int localAddContactTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_chatState;
+ (void)PBArrayAdd_needUpdate;
+ (void)PBArrayAdd_mobileIdentify;
+ (void)PBArrayAdd_metaFlag;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_lastModifyTime;
+ (void)PBArrayAdd_localCommonFlag;
+ (void)PBArrayAdd_openIMPrivacyAgreementUrl;
+ (void)PBArrayAdd_localAddContactTime;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
