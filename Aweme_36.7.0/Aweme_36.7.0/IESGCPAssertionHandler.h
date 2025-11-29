@interface IESGCPAssertionHandler : NSObject

+ (id)sharedInstance;

- (void)handleAssertWith:(SEL)a0 object:(id)a1 fileName:(id)a2 line:(long long)a3 descString:(id)a4 formatString:(id)a5;

@end
