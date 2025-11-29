@class NSString;

@interface CSJTplInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *templateDataUrl;
@property (copy, nonatomic) NSString *templateDataMd5;
@property (copy, nonatomic) NSString *templateDataId;
@property (copy, nonatomic) NSString *templateData;
@property (copy, nonatomic) NSString *templateDiffData;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *dynamic_creative;
@property (nonatomic) double score_exact_i18n;
@property (nonatomic) long long comment_num_i18n;
@property (nonatomic) unsigned long long material_type;

- (void)setupDataWithDictionary:(id)a0;
- (void)parseAppScoreCommitNum;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
