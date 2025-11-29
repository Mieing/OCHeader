@class NSMutableDictionary;

@interface AWEProfileHeaderSignatureRiskNoticeManager : NSObject

@property (nonatomic) long long riskNoticeUserHomeCount;
@property (nonatomic) long long riskNoticeUserDetailCount;
@property (retain, nonatomic) NSMutableDictionary *riskNoticeDicts;

+ (id)signatureRiskNoticStorageKey;
+ (id)dateStringKey;
+ (id)manager;

- (id)loginUserId;
- (id)todayDateString;
- (void)consumedRiskNoticeWithContext:(id)a0;
- (BOOL)shouldShowRiskNoticeWithContext:(id)a0;
- (id)noticeMessageWithContext:(id)a0;
- (id)noticeRouterUrlWithContext:(id)a0;
- (BOOL)determineIsEcommerceRiskNoticeWithContext:(id)a0;
- (id)riskNoticeDictWith:(id)a0;
- (void).cxx_destruct;

@end
