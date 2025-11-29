@class NSString;

@interface IESLiveDialogAction : NSObject

@property (copy, nonatomic) NSString *actionText;
@property (nonatomic) BOOL keepAliveAfterClick;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
