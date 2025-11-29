@class NSString;

@interface AWEUserPerfLoginModel : NSObject

@property (retain, nonatomic) NSString *loginType;
@property (nonatomic) BOOL isInLoginProcedure;

- (void)generateDefaultValue;
- (void).cxx_destruct;
- (id)init;

@end
