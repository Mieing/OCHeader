@class NSString;

@interface ContactExtendCodePB : NSObject <PBCoding>

@property (retain, nonatomic) NSString *remark;
@property (retain, nonatomic) NSString *remarkPYFull;
@property (nonatomic) unsigned int conType;
@property (nonatomic) unsigned int certificationFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_remark;
+ (void)PBArrayAdd_remarkPYFull;
+ (void)PBArrayAdd_conType;
+ (void)PBArrayAdd_certificationFlag;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithContact:(id)a0;
- (id)encodeData;
- (BOOL)decodeFromData:(id)a0;
- (void).cxx_destruct;

@end
