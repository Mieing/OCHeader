@class NSString, NSDictionary, NSArray;

@interface HMDUserExceptionParameter : HMDAppleBacktracesParameter

@property (retain, nonatomic) NSString *exceptionType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSDictionary *customParams;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSArray *addressList;
@property (retain, nonatomic) NSArray *backtraces;
@property (retain, nonatomic) NSDictionary *viewHierarchy;
@property (retain, nonatomic) NSString *aggregationKey;

+ (id)initBacktraceParameterWithExceptionType:(id)a0 backtracesArray:(id)a1 customParams:(id)a2 filters:(id)a3;
+ (id)initCurrentThreadParameterWithExceptionType:(id)a0 debugSymbol:(BOOL)a1 skippedDepth:(unsigned long long)a2 customParams:(id)a3 filters:(id)a4;
+ (id)initAllThreadParameterWithExceptionType:(id)a0 customParams:(id)a1 filters:(id)a2;
+ (id)initBaseParameterWithExceptionType:(id)a0 title:(id)a1 subTitle:(id)a2 customParams:(id)a3 filters:(id)a4;
+ (id)initAllThreadParameterWithExceptionType:(id)a0 keyThread:(unsigned int)a1 debugSymbol:(BOOL)a2 skippedDepth:(unsigned long long)a3 customParams:(id)a4 filters:(id)a5;
+ (id)initCurrentThreadParameterWithExceptionType:(id)a0 customParams:(id)a1 filters:(id)a2;
+ (id)initMainThreadParameterWithExceptionType:(id)a0 customParams:(id)a1 filters:(id)a2;
+ (id)initMainThreadParameterWithExceptionType:(id)a0 debugSymbol:(BOOL)a1 skippedDepth:(unsigned long long)a2 customParams:(id)a3 filters:(id)a4;
+ (id)initThreadParameterWithExceptionType:(id)a0 keyThread:(unsigned int)a1 customParams:(id)a2 filters:(id)a3;
+ (id)initThreadParameterWithExceptionType:(id)a0 keyThread:(unsigned int)a1 debugSymbol:(BOOL)a2 skippedDepth:(unsigned long long)a3 customParams:(id)a4 filters:(id)a5;
+ (id)initBaseParameterWithExceptionType:(id)a0 title:(id)a1 subTitle:(id)a2 addressList:(id)a3 customParams:(id)a4 filters:(id)a5;

- (void).cxx_destruct;

@end
