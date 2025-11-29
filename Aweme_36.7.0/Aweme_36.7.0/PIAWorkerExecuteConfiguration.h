@class NSString, NSURL, NSDictionary;

@interface PIAWorkerExecuteConfiguration : NSObject

@property (retain, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSString *nameSpace;
@property (retain, nonatomic) NSURL *href;
@property (retain, nonatomic) NSString *scriptURL;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *globalProps;
@property (nonatomic) BOOL isWarmUp;

- (void).cxx_destruct;

@end
