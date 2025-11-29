@class NSString;

@interface AAOperationInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int maxPayerNum;
@property (nonatomic) unsigned int maxReceiverNum;
@property (nonatomic) unsigned int maxTotalNum;
@property (nonatomic) unsigned long long maxTotalAmount;
@property (nonatomic) unsigned long long maxPerAmount;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSString *noticeUrl;

+ (void)initialize;

@end
