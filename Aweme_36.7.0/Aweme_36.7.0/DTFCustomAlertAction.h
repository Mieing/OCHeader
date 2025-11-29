@class NSString;

@interface DTFCustomAlertAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ handler;

- (id)initWithTitle:(id)a0 type:(long long)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;

@end
