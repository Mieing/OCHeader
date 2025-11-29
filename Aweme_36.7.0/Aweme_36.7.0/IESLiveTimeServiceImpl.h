@class NSString;

@interface IESLiveTimeServiceImpl : NSObject <IESLiveTimeService>

@property (nonatomic) double deltaTime;
@property (nonatomic) double clientLatesEnterRoomTimestamp;
@property (nonatomic) double clientLatesEnterRoomSuccessTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

@end
