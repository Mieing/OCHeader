@class NSString;

@interface ZZNPAopEvent : NSObject

@property (retain, nonatomic) NSString *tag;
@property (copy, nonatomic) id action;

+ (id)createWithTag:(id)a0 action:(id)a1;

- (void).cxx_destruct;

@end
