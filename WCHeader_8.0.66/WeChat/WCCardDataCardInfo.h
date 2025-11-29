@class NSString, NSArray, WCCardDetailTable, WCCardFieldItem;

@interface WCCardDataCardInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int codeType;
@property (retain, nonatomic) NSString *code;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int avilNumber;
@property (nonatomic) unsigned int stockNumber;
@property (nonatomic) unsigned int limitNumber;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *reportUrl;
@property (retain, nonatomic) NSArray *secondaryFields;
@property (retain, nonatomic) WCCardFieldItem *thirdField;
@property (retain, nonatomic) NSArray *cellList0;
@property (retain, nonatomic) NSArray *cellList1;
@property (retain, nonatomic) NSArray *cellList2;
@property (retain, nonatomic) NSArray *actionSheetList;
@property (retain, nonatomic) WCCardFieldItem *cardListField;
@property (retain, nonatomic) WCCardFieldItem *operateField;
@property (retain, nonatomic) WCCardFieldItem *limitField;
@property (retain, nonatomic) WCCardDetailTable *detailTable;
@property (retain, nonatomic) NSString *backgroundPicUrl;
@property (retain, nonatomic) WCCardFieldItem *giftingInfoField;
@property (retain, nonatomic) WCCardFieldItem *unavailableQrcodeField;
@property (nonatomic) BOOL isCommomCard;
@property (retain, nonatomic) NSString *signNumber;
@property (nonatomic) BOOL isLocationAuthorized;
@property (retain, nonatomic) WCCardFieldItem *finderField;
@property (retain, nonatomic) WCCardFieldItem *feedField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_fromUserName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
