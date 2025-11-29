@class NSString;

@interface WWKFDBContactInfo : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *bigHeadImg;
@property (retain, nonatomic) NSString *smallHeadImg;
@property (retain, nonatomic) NSString *nickNamePyinit;
@property (retain, nonatomic) NSString *nickNameQuanpin;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned int kefuType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_bigHeadImg;
+ (void)PBArrayAdd_smallHeadImg;
+ (void)PBArrayAdd_nickNamePyinit;
+ (void)PBArrayAdd_nickNameQuanpin;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_kefuType;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
