@class NSString;

@interface PayMenuRedDotItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *itemName;
@property (nonatomic) unsigned int expireTime;
@property (retain, nonatomic) NSString *wording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_itemName;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_wording;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)copyFrom:(id)a0;
- (void).cxx_destruct;

@end
