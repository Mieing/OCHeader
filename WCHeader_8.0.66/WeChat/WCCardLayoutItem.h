@class NSString;

@interface WCCardLayoutItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *cardID;
@property (retain, nonatomic) NSString *announceMent;
@property (nonatomic) unsigned int layoutEndTime;
@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) NSString *labelWording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_cardID;
+ (void)PBArrayAdd_announceMent;
+ (void)PBArrayAdd_layoutEndTime;
+ (void)PBArrayAdd_itemType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
