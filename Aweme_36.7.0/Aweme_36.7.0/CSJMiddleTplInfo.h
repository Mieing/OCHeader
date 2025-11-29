@class NSString;

@interface CSJMiddleTplInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *middleTemplateDataUrl;
@property (copy, nonatomic) NSString *middleTemplateDataMd5;
@property (copy, nonatomic) NSString *middleTemplateDataId;
@property (copy, nonatomic) NSString *middleTemplateData;
@property (copy, nonatomic) NSString *middleTemplateDiffData;
@property (copy, nonatomic) NSString *middleVersion;
@property (copy, nonatomic) NSString *middle_dynamic_creative;

- (void)setupDataWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
