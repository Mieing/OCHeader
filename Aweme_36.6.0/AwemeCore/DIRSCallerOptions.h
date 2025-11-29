@class NSString;

@interface DIRSCallerOptions : NSObject

@property (copy, nonatomic) NSString *caller;
@property (copy, nonatomic) NSString *uniqueKey;

+ (id)optionsWithCaller:(id)a0 uniqueKey:(id)a1;

- (void).cxx_destruct;

@end
