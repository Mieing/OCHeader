@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface WCPayLocalCachedData : NSObject <NSCoding>

@property (nonatomic) BOOL m_bResetMainBindSerial;
@property (retain, nonatomic) NSString *m_nsLastBindSerial;
@property (nonatomic) BOOL m_bShowedBalanceDescriptionTips;
@property (nonatomic) BOOL m_bShowedFaceToFaceTransferViewTips;
@property (nonatomic) BOOL m_bShowedFaceToFaceReceiveMoneyTips;
@property (retain, nonatomic) NSString *m_nsWCPayOfflinePayLastSelectedCardBindSerial;
@property (copy, nonatomic) NSString *m_walletUrl;
@property (retain, nonatomic) NSMutableDictionary *m_arrWXBorrowMoneyItemRedCode;
@property (retain, nonatomic) NSMutableSet *m_setReceivedHBMsgID;
@property (retain, nonatomic) NSMutableArray *m_receivedHBMsgIDArray;
@property (retain, nonatomic) NSMutableSet *m_setReceivedTransferMsgID;
@property (retain, nonatomic) NSMutableArray *m_transferMsgIDArray;
@property (nonatomic) unsigned int m_localBadgeIndex;
@property (retain, nonatomic) NSMutableDictionary *m_dicFunctionVisits;
@property (nonatomic) BOOL m_bShowedChangeWalletTips;
@property (retain, nonatomic) NSMutableDictionary *m_dicBanners;
@property (retain, nonatomic) NSMutableDictionary *m_dicAllSceneLastCard;
@property (nonatomic) BOOL m_bIsShowFetchFirstTips;
@property (retain, nonatomic) NSString *m_nsCardDetailBaseUrl;
@property (nonatomic) BOOL m_bIsAcceptRealnameLicense;
@property (nonatomic) double licenseLastQueryTime;
@property (nonatomic) long long licenseQueryDelaySeconds;
@property (retain, nonatomic) NSMutableSet *m_setGroupPayLaunchRecord;
@property (retain, nonatomic) NSMutableArray *m_groupPayLaunchRecordArray;
@property (retain, nonatomic) NSMutableSet *m_setGroupPayPaySuccessRecord;
@property (retain, nonatomic) NSMutableArray *m_groupPayPaySuccessRecordArray;
@property (nonatomic) double m_tLBSLastShowTime;
@property (nonatomic) BOOL m_bIsShowOfflinePayTips;
@property (retain, nonatomic) NSString *m_nsBalanceDetailRealnameGuideTitle;
@property (retain, nonatomic) NSString *m_nsWalletBalanceTitle;
@property (retain, nonatomic) NSMutableArray *m_synthesizeRecordQueue;
@property (nonatomic) BOOL m_bIsShowHKFacingReceiveFirstTips;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
