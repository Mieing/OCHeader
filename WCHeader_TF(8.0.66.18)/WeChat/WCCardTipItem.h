@class NSString;

@interface WCCardTipItem : MMObject <PBCoding>

@property (nonatomic) unsigned int tipType;
@property (nonatomic) unsigned int unreadCount;
@property (retain, nonatomic) NSString *layoutTip;
@property (nonatomic) unsigned int layoutEndTime;
@property (retain, nonatomic) NSString *shareUsername;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tipType;
+ (void)PBArrayAdd_unreadCount;
+ (void)PBArrayAdd_layoutTip;
+ (void)PBArrayAdd_layoutEndTime;
+ (void)PBArrayAdd_shareUsername;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
