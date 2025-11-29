@class NSString, NSMutableDictionary;

@interface OpenImContactTypeResource : NSObject <PBCoding>

@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *acctType;
@property (retain, nonatomic) NSMutableDictionary *wordings;
@property (retain, nonatomic) NSMutableDictionary *urls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_acctType;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_wordings;
+ (void)PBArrayAdd_urls;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
