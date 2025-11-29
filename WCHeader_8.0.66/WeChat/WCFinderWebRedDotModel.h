@class NSDictionary, NSString;

@interface WCFinderWebRedDotModel : NSObject <PBCoding>

@property (nonatomic) long long webBusinessType;
@property (retain, nonatomic) NSDictionary *redDotDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_webBusinessType;
+ (void)PBArrayAdd_redDotDic;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithWebBusinessType:(long long)a0;
- (void)cleanWebRedDotPath:(id)a0;
- (void)addRedDotShowInfo:(id)a0 ctrlInfo:(id)a1;
- (id)getRedDotDicByRedDotPathArray:(id)a0;
- (void).cxx_destruct;

@end
