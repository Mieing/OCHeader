@class NSDictionary, NSString;

@interface TIMXElapsedTimeTask : NSObject <TIMXElapsedTimeTaskProtocol>

@property (nonatomic) unsigned long long startTimestamp;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isAffectedByBackground;
@property (copy, nonatomic) NSString *function;
@property (copy, nonatomic) NSString *callerName;
@property (nonatomic) long long line;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
