@class NSString;

@interface DBContactBrand : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *brandExternalInfo;
@property (retain, nonatomic) NSString *brandSubscriptConfigUrl;
@property (nonatomic) unsigned int brandSubscriptionSettings;
@property (retain, nonatomic) NSString *brandIconUrl;
@property (retain, nonatomic) NSString *certificationInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_brandExternalInfo;
+ (void)PBArrayAdd_brandSubscriptConfigUrl;
+ (void)PBArrayAdd_brandSubscriptionSettings;
+ (void)PBArrayAdd_brandIconUrl;
+ (void)PBArrayAdd_certificationInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
