@class NSNumber, PropConsumeResult_Data, HTSLiveUser;

@interface IESLiveGiveAssetResponse : NSObject

@property (retain, nonatomic) NSNumber *assetID;
@property (retain, nonatomic) NSNumber *giftID;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (retain, nonatomic) HTSLiveUser *sugarDaddy;
@property (retain, nonatomic) PropConsumeResult_Data *propConsumeResultData;

- (void).cxx_destruct;

@end
