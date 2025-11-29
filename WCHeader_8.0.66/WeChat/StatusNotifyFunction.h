@class NSString;

@interface StatusNotifyFunction : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *arg;

+ (void)initialize;

- (void)setArg:(id)a0;
- (id)arg;
- (void)setName:(id)a0;
- (id)name;

@end
