@class NSString, NSArray;

@interface IESLLTempoVMFunction : NSObject

@property (retain, nonatomic) NSString *moduleName;
@property (retain, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSArray *params;

- (void).cxx_destruct;

@end
