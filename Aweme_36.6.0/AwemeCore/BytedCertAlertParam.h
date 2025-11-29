@class NSString;

@interface BytedCertAlertParam : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *positiveLabel;
@property (copy, nonatomic) id /* block */ positiveAction;
@property (copy, nonatomic) NSString *negativeLabel;
@property (copy, nonatomic) id /* block */ negativeAction;

- (void).cxx_destruct;

@end
