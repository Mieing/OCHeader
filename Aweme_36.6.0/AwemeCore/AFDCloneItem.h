@class NSString;

@interface AFDCloneItem : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) id /* block */ collector;

- (void).cxx_destruct;

@end
