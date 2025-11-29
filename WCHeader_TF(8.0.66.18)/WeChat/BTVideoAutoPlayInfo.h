@class NSString;

@interface BTVideoAutoPlayInfo : MMObject <PBCoding>

@property (nonatomic) double lastPlayedTime;
@property (nonatomic) double lastPlayedTimeExpiredTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastPlayedTime;
+ (void)PBArrayAdd_lastPlayedTimeExpiredTime;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
