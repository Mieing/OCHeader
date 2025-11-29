@class NSString, NSMutableDictionary;

@interface WCNewClickPageStatData : MMObject <PBCoding>

@property (nonatomic) unsigned int errType;
@property (nonatomic) unsigned int errCnt;
@property (retain, nonatomic) NSMutableDictionary *dicPageDatas;
@property (nonatomic) unsigned int firstEnterTimeStamp;
@property (nonatomic) unsigned int lastQuitTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_errType;
+ (void)PBArrayAdd_errCnt;
+ (void)PBArrayAdd_dicPageDatas;
+ (void)PBArrayAdd_firstEnterTimeStamp;
+ (void)PBArrayAdd_lastQuitTimeStamp;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
