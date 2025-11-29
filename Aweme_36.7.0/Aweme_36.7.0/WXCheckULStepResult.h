@class NSString;

@interface WXCheckULStepResult : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSString *errorInfo;
@property (retain, nonatomic) NSString *suggestion;

- (id)initWithCheckResult:(BOOL)a0 errorInfo:(id)a1 suggestion:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
