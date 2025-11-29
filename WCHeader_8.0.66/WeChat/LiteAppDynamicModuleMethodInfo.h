@class NSString, NSMutableArray;

@interface LiteAppDynamicModuleMethodInfo : NSObject

@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) NSMutableArray *bufferIndexes;
@property (nonatomic) BOOL isReturnBuffer;
@property (retain, nonatomic) Class returnType;

- (void).cxx_destruct;

@end
