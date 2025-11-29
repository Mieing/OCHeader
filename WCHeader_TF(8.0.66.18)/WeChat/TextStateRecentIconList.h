@class NSString, NSMutableArray;

@interface TextStateRecentIconList : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *iconIdList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_iconIdList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
