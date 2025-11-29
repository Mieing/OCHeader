@class NSString, AWEPaymentPreviewConfigModel, NSNumber, AWEURLModel;

@interface AWERewardChargeInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL hasPaid;
@property (retain, nonatomic) AWEPaymentPreviewConfigModel *previewConfig;
@property (retain, nonatomic) NSNumber *unlockNum;
@property (retain, nonatomic) NSNumber *additionalNum;
@property (retain, nonatomic) NSNumber *rit;
@property (retain, nonatomic) NSNumber *timestampR;
@property (copy, nonatomic) NSString *creatorId;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *detainmentText;
@property (retain, nonatomic) AWEURLModel *detainmentCoverUrl;
@property (copy, nonatomic) NSString *textAfterUnlock;
@property (copy, nonatomic) NSString *certificate;
@property (copy, nonatomic) NSString *sign;
@property (copy, nonatomic) NSString *sendUniqId;
@property (copy, nonatomic) NSString *hasRightText;
@property (nonatomic) unsigned long long strategyType;
@property (nonatomic) long long requiredCount;
@property (nonatomic) long long finishedCount;
@property (nonatomic) long long finishedProgress;
@property (nonatomic) long long afterFinishedCount;
@property (nonatomic) long long afterFinishedProgress;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *adAwardKey;
@property (nonatomic) BOOL hasMore;

+ (id)previewConfigJSONTransformer;
+ (id)detainmentCoverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
