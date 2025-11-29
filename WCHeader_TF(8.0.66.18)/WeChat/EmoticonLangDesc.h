@class NSString;

@interface EmoticonLangDesc : MMObject <PBCoding>

@property (retain, nonatomic) NSString *m_languageCode;
@property (retain, nonatomic) NSString *m_desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_languageCode;
+ (void)PBArrayAdd_m_desc;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
