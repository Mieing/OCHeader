@class NSString;

@interface WCFinderBrandInfo : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSString *serviceTypeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_imgUrl;
+ (void)PBArrayAdd_serviceTypeName;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
