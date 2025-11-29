@class NSString;

@interface AWEIMFansGroupPrivilegeEscalationViewModel : NSObject

@property (nonatomic) long long creatCountLimit;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *transferText;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSString *transferSchema;

- (void)didTransfer;
- (void)willTransfer;
- (void).cxx_destruct;
- (void)didAppear;

@end
