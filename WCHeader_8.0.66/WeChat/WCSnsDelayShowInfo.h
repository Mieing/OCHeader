@class NSString;

@interface WCSnsDelayShowInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *layerId;
@property (retain, nonatomic) NSString *expId;
@property (nonatomic) unsigned int respTimeStamp;
@property (nonatomic) unsigned int delayInterval;
@property (nonatomic) unsigned int showTimeStamp;
@property (nonatomic) BOOL needDelayInViewLifeCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_layerId;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_respTimeStamp;
+ (void)PBArrayAdd_delayInterval;
+ (void)PBArrayAdd_showTimeStamp;
+ (void)initialize;

@end
