@class NSString;

@interface WCMegaVideoExtendedReading : NSObject <WCTColumnCoding, PBCoding>

@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_link;
+ (void)PBArrayAdd_title;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMegaVideoExtendedReading:(id)a0;
- (id)genMegaVideoExtendedReading;
- (void).cxx_destruct;

@end
