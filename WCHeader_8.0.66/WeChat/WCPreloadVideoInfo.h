@class NSString, NSMutableDictionary;

@interface WCPreloadVideoInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicRecord;
@property (nonatomic) unsigned int dailyControlTimestamp;
@property (nonatomic) unsigned int dailyControlCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicRecord;
+ (void)PBArrayAdd_dailyControlTimestamp;
+ (void)PBArrayAdd_dailyControlCount;
+ (void)initialize;

@end
