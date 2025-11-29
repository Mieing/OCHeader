@class NSString;

@interface AWECommentNotificationObserver : NSObject

@property (copy, nonatomic) NSString *eventKey;
@property (weak, nonatomic) id observer;
@property (weak, nonatomic) id object;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
