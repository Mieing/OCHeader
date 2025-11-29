@class NSArray, NSString;

@interface WCPayOverseaPayFunctionListRespObject : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *m_functionList;
@property (retain, nonatomic) NSArray *m_typeInfoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_functionList;
+ (void)PBArrayAdd_m_typeInfoList;
+ (void)initialize;
+ (id)GenFromDictionary:(id)a0;
+ (id)getSaveRootDir;
+ (id)getSavePathWithTpaCountry:(unsigned int)a0;
+ (void)checkFileWithTpaCountry:(unsigned int)a0;
+ (id)cacheObjectWithTpaCountry:(unsigned int)a0;

@end
