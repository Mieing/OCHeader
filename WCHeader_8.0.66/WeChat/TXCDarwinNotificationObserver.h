@class NSString;

@interface TXCDarwinNotificationObserver : NSObject

@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
