@class NSString, CJPayBindCardPayReConfirmInfo;

@interface CJPayBindCardPayReConfirmViewModel : NSObject

@property (retain, nonatomic) CJPayBindCardPayReConfirmInfo *confirmInfoModel;
@property (copy, nonatomic) NSString *bankIconUrlStr;
@property (copy, nonatomic) NSString *bankDescStr;

- (void).cxx_destruct;

@end
