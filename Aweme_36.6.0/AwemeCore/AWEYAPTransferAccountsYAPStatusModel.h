@class NSString;

@interface AWEYAPTransferAccountsYAPStatusModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *bizMsg;
@property (nonatomic) unsigned long long yapStatus;
@property (nonatomic) long long retryDuration;
@property (nonatomic) BOOL continueQuery;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
