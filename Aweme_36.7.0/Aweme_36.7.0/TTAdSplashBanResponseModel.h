@class NSString, NSArray, NSData, TTAdSplashBanRequestModel;

@interface TTAdSplashBanResponseModel : NSObject

@property (nonatomic) unsigned int reqTranscationId;
@property (retain, nonatomic) NSData *rawData;
@property (retain, nonatomic) NSData *rawDataWithoutMAC;
@property (nonatomic) unsigned int transactaionID;
@property (nonatomic) unsigned char type;
@property (retain, nonatomic) NSData *content;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *MAC;
@property (nonatomic) long long platform;
@property (nonatomic) long long action;
@property (nonatomic) long long cidsLen;
@property (copy, nonatomic) NSArray *cids;
@property (nonatomic) long long clearCacheLen;
@property (copy, nonatomic) NSArray *clearCaches;
@property (nonatomic) long long logExtraLen;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) unsigned char flag;
@property (nonatomic) unsigned long long randomNum;
@property (weak, nonatomic) TTAdSplashBanRequestModel *reqModel;

- (BOOL)isValidModel;
- (long long)covertInt64FromData:(id)a0;
- (id)initWithData:(id)a0 requestModel:(id)a1;
- (BOOL)shouldShowAd;
- (void).cxx_destruct;
- (BOOL)parserData;

@end
