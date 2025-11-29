@class NSString;

@interface DBContactRemark : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *aliasName;
@property (retain, nonatomic) NSString *remark;
@property (retain, nonatomic) NSString *remarkPYFull;
@property (retain, nonatomic) NSString *remarkShortPinYin;
@property (retain, nonatomic) NSString *fullPinYin;
@property (retain, nonatomic) NSString *descriptions;
@property (retain, nonatomic) NSString *labelIDList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_aliasName;
+ (void)PBArrayAdd_remark;
+ (void)PBArrayAdd_remarkPYFull;
+ (void)PBArrayAdd_remarkShortPinYin;
+ (void)PBArrayAdd_fullPinYin;
+ (void)PBArrayAdd_descriptions;
+ (void)PBArrayAdd_labelIDList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
