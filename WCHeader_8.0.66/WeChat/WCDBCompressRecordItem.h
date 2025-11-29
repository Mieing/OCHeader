@class NSString;

@interface WCDBCompressRecordItem : NSObject <PBCoding>

@property (nonatomic) long long startTime;
@property (nonatomic) unsigned int totalPageCount;
@property (nonatomic) unsigned int freePageCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_totalPageCount;
+ (void)PBArrayAdd_freePageCount;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
