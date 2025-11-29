@class NSString;

@interface WCShareCardLayoutDataItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *cardTpId;
@property (retain, nonatomic) NSString *announceMent;
@property (nonatomic) unsigned int layoutEndTime;
@property (nonatomic) unsigned int top;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_cardTpId;
+ (void)PBArrayAdd_announceMent;
+ (void)PBArrayAdd_layoutEndTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
