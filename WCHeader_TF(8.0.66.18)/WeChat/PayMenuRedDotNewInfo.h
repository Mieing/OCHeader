@class NSString, NSMutableArray;

@interface PayMenuRedDotNewInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *m_newInfoItemArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_newInfoItemArray;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
