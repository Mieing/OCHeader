@class NSString;

@interface MPPageFriendInfo : MMObject <PBCoding>

@property (copy, nonatomic) NSString *friendReadCountStr;
@property (nonatomic) unsigned int friendReadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_friendReadCountStr;
+ (void)PBArrayAdd_friendReadCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
