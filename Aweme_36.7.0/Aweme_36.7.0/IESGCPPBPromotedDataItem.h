@class NSString, IESGCPPBPromotedDataOmnichannel, IESGCPPBOmniPromotedData;

@interface IESGCPPBPromotedDataItem : GPBMessage

@property (copy, nonatomic) NSString *todayIncome;
@property (copy, nonatomic) NSString *newUsers;
@property (copy, nonatomic) NSString *sumIncome;
@property (copy, nonatomic) NSString *activeUsers;
@property (copy, nonatomic) NSString *todayCharge;
@property (copy, nonatomic) NSString *sumCharge;
@property (copy, nonatomic) NSString *todayDownload;
@property (nonatomic) long long awemePublishCount;
@property (copy, nonatomic) NSString *reserveUsers;
@property (copy, nonatomic) NSString *sumActivationIncome;
@property (copy, nonatomic) NSString *todayActivationIncome;
@property (copy, nonatomic) NSString *todayActivationUsers;
@property (copy, nonatomic) NSString *yesterdayLaunch;
@property (copy, nonatomic) NSString *yesterdayCharge;
@property (copy, nonatomic) NSString *todayLaunch;
@property (copy, nonatomic) NSString *unitPrice;
@property (copy, nonatomic) NSString *yesterdayActivationUsers;
@property (copy, nonatomic) NSString *yesterdayReserveUsers;
@property (copy, nonatomic) NSString *yesterdayIncome;
@property (copy, nonatomic) NSString *roomDownload;
@property (copy, nonatomic) NSString *roomInstall;
@property (copy, nonatomic) NSString *roomActivation;
@property (retain, nonatomic) IESGCPPBPromotedDataOmnichannel *dataOmnichannel;
@property (nonatomic) BOOL hasDataOmnichannel;
@property (retain, nonatomic) IESGCPPBOmniPromotedData *omniPromotedData;
@property (nonatomic) BOOL hasOmniPromotedData;

+ (id)descriptor;

@end
