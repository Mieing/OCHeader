@class NSString;

@interface WCFinderCleanFeedInfoModel : NSObject <PBCoding>

@property (nonatomic) long long fileCreateTs;
@property (nonatomic) long long cleanTs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_fileCreateTs;
+ (void)PBArrayAdd_cleanTs;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
