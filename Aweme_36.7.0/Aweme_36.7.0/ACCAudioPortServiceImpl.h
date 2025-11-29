@class RACSignal, NSString, RACSubject;

@interface ACCAudioPortServiceImpl : NSObject <ACCAudioPortService>

@property (retain, nonatomic) RACSubject *IOPortChangeSubject;
@property (nonatomic) long long inputPort;
@property (nonatomic) long long outputPort;
@property (readonly, nonatomic) RACSignal *IOPortChangeSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
