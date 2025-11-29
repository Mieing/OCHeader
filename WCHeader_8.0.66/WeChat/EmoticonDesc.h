@class NSString, NSMutableArray;

@interface EmoticonDesc : MMObject <PBCoding>

@property (retain, nonatomic) NSString *m_md5;
@property (retain, nonatomic) NSMutableArray *m_LangList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_md5;
+ (void)PBArrayAdd_m_LangList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)hasTheSameMd5WithDesc:(id)a0;
- (void).cxx_destruct;

@end
