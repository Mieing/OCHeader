@class NSString;

@interface TTVideoEngineSubInfo : NSObject

@property (nonatomic) long long pts;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long duration;

- (void).cxx_destruct;

@end
