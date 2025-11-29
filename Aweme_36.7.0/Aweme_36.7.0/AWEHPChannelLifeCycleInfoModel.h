@class NSString;

@interface AWEHPChannelLifeCycleInfoModel : MTLModel <AWEHPChannelLifeCycleInfoModelProtocol>

@property (nonatomic) long long loadCount;
@property (nonatomic) long long enterCount;
@property (nonatomic) long long viewEnterCount;
@property (nonatomic) double lastEnterTime;
@property (nonatomic) double lastLeaveTime;
@property (nonatomic) double stayTime;
@property (nonatomic) double willResignActiveTime;
@property (nonatomic) double didBecomeActiveTime;
@property (nonatomic) double stayTimeWithNoActive;
@property (nonatomic) double stayTimeWithActive;
@property (nonatomic) double lastEnterMemory;
@property (nonatomic) double lastLeaveMemory;
@property (nonatomic) double stayMemory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
