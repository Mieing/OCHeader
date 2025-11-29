@class NSString;

@interface WAWeAppBindJumpToAppInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *jumpToAppID;
@property (retain, nonatomic) NSString *jumpToUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_jumpToAppID;
+ (void)PBArrayAdd_jumpToUserName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
