@class NSString;

@interface TableSessionStorageSetting : NSObject <PBCoding>

@property (nonatomic) BOOL isHasRecord;
@property (nonatomic) unsigned int sessionVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isHasRecord;
+ (void)PBArrayAdd_sessionVersion;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
