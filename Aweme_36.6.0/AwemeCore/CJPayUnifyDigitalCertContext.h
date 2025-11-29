@class NSString, NSDictionary;

@interface CJPayUnifyDigitalCertContext : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSString *pin;
@property (copy, nonatomic) NSString *signFactorID;
@property (copy, nonatomic) NSString *signFactor;
@property (copy, nonatomic) NSString *originData;
@property (nonatomic) BOOL onlyQueryLocalCertStatus;
@property (nonatomic) BOOL hasUpdateQ1Data;
@property (nonatomic) BOOL needShowLoading;
@property (copy, nonatomic) NSString *loadingTitle;
@property (copy, nonatomic) NSDictionary *trackData;
@property (copy, nonatomic) NSString *ntvPartKey;
@property (copy, nonatomic) NSString *partCsrData;
@property (copy, nonatomic) NSString *entireCsrData;
@property (copy, nonatomic) NSString *certData;
@property (copy, nonatomic) id /* block */ loadingBlock;
@property (copy, nonatomic) id /* block */ progressNoticeBlock;
@property (copy, nonatomic) id /* block */ completion;

- (BOOL)needPreUpdateSignFactor;
- (void).cxx_destruct;

@end
