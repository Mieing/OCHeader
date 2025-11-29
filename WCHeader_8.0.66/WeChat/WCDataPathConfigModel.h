@class NSString;

@interface WCDataPathConfigModel : MMObject <PBCoding>

@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) NSString *dataPath;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NSString *expect;
@property (nonatomic) BOOL encrypt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_className;
+ (void)PBArrayAdd_dataPath;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_expect;
+ (void)PBArrayAdd_encrypt;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithDataPath:(id)a0 withExpect:(id)a1;
- (id)initWithClassName:(id)a0 withDataPath:(id)a1 withAction:(unsigned int)a2 withEncrypt:(BOOL)a3;
- (id)initWithClassName:(id)a0 withDataPath:(id)a1;
- (id)toString;
- (void).cxx_destruct;

@end
