@class NSString, NSMutableArray, NSMutableDictionary;

@interface ContactProfileRecommendInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *profileRemark;
@property (retain, nonatomic) NSString *profilePhone;
@property (retain, nonatomic) NSMutableArray *arrProfileRemark;
@property (retain, nonatomic) NSMutableArray *arrProfilePhone;
@property (retain, nonatomic) NSMutableArray *arrProfileLabel;
@property (retain, nonatomic) NSString *profileDesc;
@property (nonatomic) unsigned int profileMarkMsgId;
@property (nonatomic) unsigned int profilePhoneMsgId;
@property (nonatomic) unsigned int firstImageMsgLocalId;
@property (nonatomic) unsigned int systemMsgLocalId;
@property (retain, nonatomic) NSMutableArray *arrAnalyzeMsgLocalId;
@property (nonatomic) BOOL bIsClickExposure;
@property (retain, nonatomic) NSMutableDictionary *dicRemarkType;
@property (retain, nonatomic) NSMutableDictionary *dicRemarkMsgId;
@property (retain, nonatomic) NSMutableDictionary *dicPhoneMsgId;
@property (retain, nonatomic) NSMutableDictionary *dicRemarkCandidateSourceType;
@property (retain, nonatomic) NSMutableDictionary *dicPhoneCandidateSourceType;
@property (nonatomic) unsigned int imageCandidateSourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_profileRemark;
+ (void)PBArrayAdd_profilePhone;
+ (void)PBArrayAdd_arrProfileLabel;
+ (void)PBArrayAdd_profileDesc;
+ (void)PBArrayAdd_arrProfileRemark;
+ (void)PBArrayAdd_arrProfilePhone;
+ (void)PBArrayAdd_profileMarkMsgId;
+ (void)PBArrayAdd_profilePhoneMsgId;
+ (void)PBArrayAdd_firstImageMsgLocalId;
+ (void)PBArrayAdd_systemMsgLocalId;
+ (void)PBArrayAdd_arrAnalyzeMsgLocalId;
+ (void)PBArrayAdd_bIsClickExposure;
+ (void)PBArrayAdd_dicRemarkType;
+ (void)PBArrayAdd_dicRemarkMsgId;
+ (void)PBArrayAdd_dicPhoneMsgId;
+ (void)PBArrayAdd_dicRemarkCandidateSourceType;
+ (void)PBArrayAdd_dicPhoneCandidateSourceType;
+ (void)PBArrayAdd_imageCandidateSourceType;
+ (void)initialize;

@end
