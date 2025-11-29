@class NSString;

@interface BDConfigObserver : NSObject

@property (nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
