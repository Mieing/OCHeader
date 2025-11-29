@class NSString;

@interface AWEGrouponHalfScreenGesturesInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long frequencyDay;
@property (nonatomic) long long frequencyTimes;
@property (nonatomic) long long sceneType;
@property (nonatomic) long long showSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;


@end
