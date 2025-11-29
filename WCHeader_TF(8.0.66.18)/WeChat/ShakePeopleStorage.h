@class NSString, NSMutableArray;

@interface ShakePeopleStorage : NSObject <PBCoding, NSCoding, NSCopying>

@property (retain, nonatomic) NSMutableArray *m_arrShakeList;
@property (nonatomic) unsigned int m_uiSoundStatus;
@property (nonatomic) unsigned int m_uiNewArriveCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_arrShakeList;
+ (void)PBArrayAdd_m_uiSoundStatus;
+ (void)PBArrayAdd_m_uiNewArriveCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)preInit;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
