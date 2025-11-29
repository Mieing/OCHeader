@class NSString;

@interface WCPayOverseaTypeInfoObject : NSObject <PBCoding>

@property (retain, nonatomic) NSString *m_typeName;
@property (nonatomic) unsigned int m_typeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_typeName;
+ (void)PBArrayAdd_m_typeId;
+ (void)initialize;
+ (id)GenFromDictionary:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
