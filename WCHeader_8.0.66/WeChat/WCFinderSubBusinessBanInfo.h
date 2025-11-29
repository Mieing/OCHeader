@class NSString, NSMutableArray;

@interface WCFinderSubBusinessBanInfo : NSObject <PBCoding>

@property (nonatomic) long long curIndex;
@property (retain, nonatomic) NSMutableArray *businessArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_curIndex;
+ (void)PBArrayAdd_businessArray;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)getTargetNumber;
- (void)moveToNextIndex;
- (void).cxx_destruct;

@end
