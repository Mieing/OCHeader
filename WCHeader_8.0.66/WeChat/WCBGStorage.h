@class NSString, NSMutableArray;

@interface WCBGStorage : NSObject <NSCoding, PBCoding>

@property (nonatomic) unsigned int hash;
@property (retain, nonatomic) NSMutableArray *albumList;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgStorageFromServerObject:(id)a0;
+ (void)PBArrayAdd_hash;
+ (void)PBArrayAdd_albumList;
+ (void)initialize;
+ (id)parseFromXml:(id)a0 preferLang:(id)a1;
+ (id)fromBuffer:(id)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toXml;
- (id)toBuffer;
- (void).cxx_destruct;

@end
