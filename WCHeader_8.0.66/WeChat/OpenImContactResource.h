@class NSString, NSMutableDictionary;

@interface OpenImContactResource : NSObject <PBCoding>

@property (retain, nonatomic) NSString *acctType;
@property (nonatomic) unsigned int funcFlag;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableDictionary *wordings;
@property (retain, nonatomic) NSMutableDictionary *urls;
@property (retain, nonatomic) NSMutableDictionary *woringResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_acctType;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_wordings;
+ (void)PBArrayAdd_urls;
+ (void)PBArrayAdd_woringResources;
+ (void)initialize;

@end
