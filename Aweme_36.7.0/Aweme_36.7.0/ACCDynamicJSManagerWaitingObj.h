@class NSString, NSArray;

@interface ACCDynamicJSManagerWaitingObj : NSObject

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSArray *params;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
