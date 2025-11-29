@class NSString;

@interface MMTipsAction : NSObject

@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long style;

- (void).cxx_destruct;

@end
