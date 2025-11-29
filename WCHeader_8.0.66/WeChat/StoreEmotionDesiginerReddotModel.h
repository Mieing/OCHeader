@class NSString, NSMutableDictionary;

@interface StoreEmotionDesiginerReddotModel : MMObject <PBCoding>

@property (retain, nonatomic) NSString *designerUin;
@property (nonatomic) unsigned int reddotTimeStamp;
@property (retain, nonatomic) NSMutableDictionary *pidsWithReddotStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_designerUin;
+ (void)PBArrayAdd_reddotTimeStamp;
+ (void)PBArrayAdd_pidsWithReddotStatus;
+ (void)initialize;
+ (id)getSaveRootDir;
+ (id)getSavePath:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
