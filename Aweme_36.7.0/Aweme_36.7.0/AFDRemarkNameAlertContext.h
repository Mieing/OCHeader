@class NSString, AWEUserModel;

@interface AFDRemarkNameAlertContext : NSObject

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *mobileKey;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSString *greetingMsg;
@property (retain, nonatomic) NSString *mateApplyMsg;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
