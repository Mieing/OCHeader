@class NSString;

@interface IESIMBindPhoneAlertContext : NSObject <IESIMBindPhoneAlertContextProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *cancelTitle;
@property (copy, nonatomic) NSString *confirmTitle;
@property (copy, nonatomic) id /* block */ customConfirmBlock;
@property (copy, nonatomic) id /* block */ customCancelBlock;
@property (copy, nonatomic) id /* block */ presentHandler;

- (id)initWithEnterFrom:(id)a0;
- (void).cxx_destruct;

@end
