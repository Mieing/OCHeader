@class NSString;

@interface AWEPadKeyBoardOperation : NSObject

@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) id target;
@property (copy, nonatomic) id /* block */ clickCallback;
@property (copy, nonatomic) id /* block */ doubleClickCallback;
@property (copy, nonatomic) id /* block */ longPressBeginCallback;
@property (copy, nonatomic) id /* block */ longPressEndCallback;

- (void).cxx_destruct;

@end
