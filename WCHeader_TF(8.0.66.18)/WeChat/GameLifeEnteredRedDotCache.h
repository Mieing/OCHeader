@class NSString, NSMutableArray;

@interface GameLifeEnteredRedDotCache : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *enterIdArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enterIdArr;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
