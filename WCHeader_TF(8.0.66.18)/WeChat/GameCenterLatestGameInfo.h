@class NSString;

@interface GameCenterLatestGameInfo : MMObject <PBCoding>

@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) BOOL isSubscribed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_downloadType;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
