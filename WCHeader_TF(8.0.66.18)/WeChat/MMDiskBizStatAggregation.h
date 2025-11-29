@class NSString;

@interface MMDiskBizStatAggregation : NSObject <PBCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) void /* unknown type, empty encoding */ fileNum;
@property (nonatomic) void /* unknown type, empty encoding */ fileSize;
@property (nonatomic, readonly) NSString *description;

+ (void)PBArrayAdd_fileNum;
+ (void)PBArrayAdd_fileSize;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)add:(id)a0;
- (id)init;

@end
