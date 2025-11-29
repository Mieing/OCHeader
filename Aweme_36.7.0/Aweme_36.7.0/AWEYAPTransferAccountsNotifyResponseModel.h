@class NSNumber, NSString;

@interface AWEYAPTransferAccountsNotifyResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *bizCode;
@property (copy, nonatomic) NSString *bizMsg;
@property (retain, nonatomic) NSNumber *notifyStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
