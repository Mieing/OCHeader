@class NSString;

@interface GIDMDMPasscodeState : NSObject

@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *info;

+ (id)passcodeState;

- (id)initWithStatus:(id)a0 info:(id)a1;
- (void).cxx_destruct;

@end
