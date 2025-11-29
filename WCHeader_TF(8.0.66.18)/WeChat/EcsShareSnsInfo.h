@class NSString;

@interface EcsShareSnsInfo : NSObject <NSCoding, PBCoding>

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *ecsJumpInfoBase64;
@property (retain, nonatomic) NSString *reportData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_productId;
+ (void)PBArrayAdd_ecsJumpInfoBase64;
+ (void)PBArrayAdd_reportData;
+ (void)initialize;
+ (id)fromXML:(struct XmlReaderNode_t { } *)a0;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toXML;
- (id)genProductCardReq;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
