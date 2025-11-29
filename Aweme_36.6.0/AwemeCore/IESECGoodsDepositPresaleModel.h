@class NSNumber, NSString, IESECURLModel;

@interface IESECGoodsDepositPresaleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (retain, nonatomic) NSNumber *depositPrice;
@property (nonatomic) double depositBeginTime;
@property (nonatomic) double depositEndTime;
@property (nonatomic) double depositFinalPaymentBeginTime;
@property (nonatomic) double depositFinalPaymentEndTime;
@property (copy, nonatomic) NSString *depositActivityID;
@property (retain, nonatomic) IESECURLModel *bgPicture;
@property (retain, nonatomic) IESECURLModel *bgLogoPicture;
@property (copy, nonatomic) NSString *prefix;
@property (readonly, nonatomic) double currentTime;
@property (retain, nonatomic) NSNumber *appointCount;
@property (nonatomic) long long appointStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
