@class NSString, NSError;

@interface DYVCDAccountSwitchResultModel : NSObject

@property (nonatomic) BOOL switchSucceed;
@property (nonatomic) BOOL accountStatusChanged;
@property (copy, nonatomic) NSString *tipText;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
