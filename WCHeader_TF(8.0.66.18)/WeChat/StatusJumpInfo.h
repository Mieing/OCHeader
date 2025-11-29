@class NSString;

@interface StatusJumpInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *jumpType;
@property (retain, nonatomic) NSString *busiId;
@property (retain, nonatomic) NSString *busiBuf;
@property (retain, nonatomic) NSString *keyBusiBuf;

+ (void)initialize;

- (void)setKeyBusiBuf:(id)a0;
- (id)keyBusiBuf;
- (void)setBusiBuf:(id)a0;
- (id)busiBuf;
- (void)setBusiId:(id)a0;
- (id)busiId;
- (void)setJumpType:(id)a0;
- (id)jumpType;

@end
