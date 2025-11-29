@class NSString;

@interface ShakeTvHistoryItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *brandUserName;
@property (retain, nonatomic) NSString *deeplinkJumpUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_brandUserName;
+ (void)PBArrayAdd_deeplinkJumpUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
