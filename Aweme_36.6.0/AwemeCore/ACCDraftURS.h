@class NSString;

@interface ACCDraftURS : ACCURS

@property (retain, nonatomic) NSString *projectUUID;
@property (retain, nonatomic) NSString *relativePath;

+ (id)getSourceFrom;
+ (id)JSONKeyPathsByPropertyKey;

- (id)absolutePathWithDraftID:(id)a0;
- (id)initWithRelativePath:(id)a0 inProjectUUID:(id)a1;
- (id)initWithParseModel:(id)a0;
- (id)firstLevelRelativeDirectory;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getParameters;

@end
