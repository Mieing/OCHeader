@class NSString;

@interface WCFinderBusinessTabModel : NSObject <PBCoding>

@property (nonatomic) long long findRedDotExposeCount;
@property (nonatomic) long long findRedDotClickCount;
@property (nonatomic) long long lastUpdateTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_findRedDotExposeCount;
+ (void)PBArrayAdd_findRedDotClickCount;
+ (void)PBArrayAdd_lastUpdateTimeStamp;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)cleanCount;

@end
