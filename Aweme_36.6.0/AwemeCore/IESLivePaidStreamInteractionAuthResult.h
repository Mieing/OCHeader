@class NSString;

@interface IESLivePaidStreamInteractionAuthResult : NSObject

@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, copy, nonatomic) NSString *disabledToast;

+ (id)defaultAuthResult;

- (id)initWithDisabled:(BOOL)a0 disabledTaost:(id)a1;
- (void).cxx_destruct;

@end
