@class NSString, NSArray, UIImageHandle;

@interface AlgorithmResultUnion : NSObject

@property long long int64Val;
@property double doubleVal;
@property (retain) NSString *stringVal;
@property (retain) NSArray *vecVal;
@property (retain) UIImageHandle *imgVal;

- (void).cxx_destruct;

@end
