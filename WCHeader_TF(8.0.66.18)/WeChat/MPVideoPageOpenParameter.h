@class NSString, NSNumber;

@interface MPVideoPageOpenParameter : MMObject <PBCoding>

@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int videoWidth;
@property (nonatomic) unsigned int videoHeight;
@property (retain, nonatomic) NSNumber *videoInitialTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_videoId;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_videoWidth;
+ (void)PBArrayAdd_videoHeight;
+ (void)PBArrayAdd_videoInitialTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
