@class NSString, NSMutableDictionary;

@interface WCFinderWebRedDotModelContainer : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *webRedDotDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_webRedDotDic;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)getWebRedDotModelWithType:(long long)a0;
- (void)setWebRedDotModel:(id)a0 forType:(long long)a1;
- (void).cxx_destruct;

@end
