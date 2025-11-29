@class NSNumber, NSMutableDictionary, NSString;

@interface WASessionNotifyInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSNumber *globalOpenStatus;
@property (retain, nonatomic) NSMutableDictionary *dicCloseItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_globalOpenStatus;
+ (void)PBArrayAdd_dicCloseItem;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
