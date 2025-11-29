@class NSString;

@interface WCPayUserPrivacyInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int m_needAgreeDuty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_needAgreeDuty;
+ (void)initialize;
+ (id)LoadFromFile;

- (id)getPBPropertyTable;
- (void)saveToFile;

@end
