@class NSString;

@interface DIRSLog : NSObject <IRISLog>

@property (nonatomic) long long level;
@property (nonatomic) double time;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
