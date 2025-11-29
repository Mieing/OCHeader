@class NSString;

@interface WCMegaVideoFinderBusiness : NSObject <WCTColumnCoding, PBCoding>

@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_nonceId;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMegaVideoFinderBusiness:(id)a0;
- (id)genMegaVideoFinderBusiness;
- (void).cxx_destruct;

@end
