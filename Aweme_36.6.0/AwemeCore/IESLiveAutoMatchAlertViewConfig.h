@class NSString;

@interface IESLiveAutoMatchAlertViewConfig : NSObject

@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *actionText;
@property (retain, nonatomic) NSString *rightButtonText;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ leftButtonBlock;
@property (copy, nonatomic) id /* block */ rightButtonBlock;

- (void).cxx_destruct;

@end
