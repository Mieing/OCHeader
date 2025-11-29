@class NSString;

@interface AWEHPHambCmdNode : NSObject

@property (readonly, copy, nonatomic) NSString *key;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithKey:(id)a0;

@end
