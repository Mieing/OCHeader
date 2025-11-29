@class NSString;

@interface BytedCertAlertAction : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ handler;

+ (id)actionWithType:(long long)a0 title:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;

@end
