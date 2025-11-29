@class NSString, NSNumber;

@interface CallFrame : NSObject

@property (retain, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSString *scriptId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *lineNumber;
@property (retain, nonatomic) NSNumber *columnNumber;

- (id)dictKey;
- (void).cxx_destruct;

@end
