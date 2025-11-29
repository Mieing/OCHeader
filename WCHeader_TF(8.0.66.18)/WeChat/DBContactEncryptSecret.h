@class NSString;

@interface DBContactEncryptSecret : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *textStateEncryptSecret;
@property (retain, nonatomic) NSString *commonEncryptSecret;
@property (retain, nonatomic) NSString *recordEncryptSecret;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_textStateEncryptSecret;
+ (void)PBArrayAdd_commonEncryptSecret;
+ (void)PBArrayAdd_recordEncryptSecret;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
