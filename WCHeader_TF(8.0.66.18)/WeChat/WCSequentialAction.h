@interface WCSequentialAction : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;

@end
