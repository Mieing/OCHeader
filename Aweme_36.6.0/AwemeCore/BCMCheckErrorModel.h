@class NSArray, NSString;

@interface BCMCheckErrorModel : NSObject

@property (copy, nonatomic) NSArray *errorParamList;
@property (copy, nonatomic) NSString *extraRule;

+ (id)initWithErrorParamList:(id)a0 extraRule:(id)a1;

- (void).cxx_destruct;

@end
