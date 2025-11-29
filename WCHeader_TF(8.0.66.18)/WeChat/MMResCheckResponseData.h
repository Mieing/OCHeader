@class NSData, NSString;

@interface MMResCheckResponseData : NSObject <PBCoding>

@property (nonatomic) unsigned int nextTime;
@property (retain, nonatomic) NSData *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nextTime;
+ (void)PBArrayAdd_context;
+ (void)initialize;
+ (BOOL)SaveContext:(id)a0 checkTime:(unsigned int)a1;
+ (BOOL)SaveData:(id)a0;
+ (id)GetCached;
+ (void)InvalidateCache;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
