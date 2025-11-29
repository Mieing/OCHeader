@class NSString;

@interface BDREFunc : NSObject

@property (retain, nonatomic) NSString *symbol;

- (id)paramsInvalidateErrorWithSelectorName:(id)a0;
- (id)execute:(id)a0;
- (void).cxx_destruct;
- (id)execute:(id)a0 error:(id *)a1;

@end
