@class NSString, NSMutableDictionary;

@interface WAEnableCopyPathMenuNotifyStorage : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicAppid2Info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicAppid2Info;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
