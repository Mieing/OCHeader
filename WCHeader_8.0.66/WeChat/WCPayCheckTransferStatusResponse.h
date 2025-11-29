@class WCPayAddressInfo, NSString, NSArray, RecvCustomerInfoModule, RecvAccountInfo, NSMutableArray, WCPayExposureInfo, NoticeItem, WCPayTransferResendInfo, WCPayTextInfo;

@interface WCPayCheckTransferStatusResponse : NSObject {
    NSString *m_nsRefundBandType;
}

@property (nonatomic) unsigned int m_uiTransferStatus;
@property (retain, nonatomic) NSString *m_nsTransferStatusName;
@property (retain, nonatomic) NSString *m_nsFeeType;
@property (nonatomic) long long m_llFee;
@property (nonatomic) BOOL m_bIsPayer;
@property (retain, nonatomic) NSString *m_nsSenderUserName;
@property (retain, nonatomic) NSString *m_nsRecieverUserName;
@property (retain, nonatomic) NSString *m_nsTransferTime;
@property (retain, nonatomic) NSString *m_nsRefundBankType;
@property (retain, nonatomic) NSString *m_nsModifyTime;
@property (retain, nonatomic) NSString *m_nsStatusDesc;
@property (retain, nonatomic) NSString *m_nsStatusSupplementary;
@property (nonatomic) unsigned long long delayStatus;
@property (retain, nonatomic) NSString *m_nsBannerContent;
@property (retain, nonatomic) NSString *m_nsBannerUrl;
@property (retain) NSString *desc;
@property (retain) WCPayAddressInfo *addr_info;
@property (retain) WCPayExposureInfo *exposure_info;
@property (retain) WCPayTextInfo *text_info;
@property (retain, nonatomic) WCPayTransferResendInfo *resendInfo;
@property (retain, nonatomic) WCPayTextInfo *middle_info;
@property (retain, nonatomic) NSMutableArray *desc_items;
@property (nonatomic) long long trade_mem_type;
@property (retain, nonatomic) NSMutableArray *option_items;
@property (retain, nonatomic) NoticeItem *noticeItem;
@property (retain, nonatomic) RecvAccountInfo *recv_account_info;
@property (retain, nonatomic) NSArray *customer_info_list;
@property (retain, nonatomic) RecvCustomerInfoModule *recv_customer_info_module;

- (void).cxx_destruct;

@end
