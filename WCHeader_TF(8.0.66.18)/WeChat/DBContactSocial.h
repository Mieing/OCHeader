@class NSString, NSMutableArray;

@interface DBContactSocial : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *mobileHash;
@property (retain, nonatomic) NSString *mobileFullHash;
@property (nonatomic) unsigned long long qqUin;
@property (retain, nonatomic) NSString *linkedInID;
@property (retain, nonatomic) NSString *linkedInName;
@property (retain, nonatomic) NSString *linkedInPublicUrl;
@property (nonatomic) unsigned int wcFlag;
@property (retain, nonatomic) NSString *wcBGImgObjectID;
@property (retain, nonatomic) NSString *wcBGImgID;
@property (retain, nonatomic) NSString *cardUrl;
@property (retain, nonatomic) NSMutableArray *phoneList;
@property (retain, nonatomic) NSString *weiDianInfo;
@property (retain, nonatomic) NSMutableArray *cardList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mobileHash;
+ (void)PBArrayAdd_mobileFullHash;
+ (void)PBArrayAdd_qqUin;
+ (void)PBArrayAdd_linkedInID;
+ (void)PBArrayAdd_linkedInName;
+ (void)PBArrayAdd_linkedInPublicUrl;
+ (void)PBArrayAdd_wcFlag;
+ (void)PBArrayAdd_wcBGImgObjectID;
+ (void)PBArrayAdd_wcBGImgID;
+ (void)PBArrayAdd_cardUrl;
+ (void)PBArrayAdd_phoneList;
+ (void)PBArrayAdd_weiDianInfo;
+ (void)PBArrayAdd_cardList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
