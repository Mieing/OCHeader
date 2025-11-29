@class NSString, NSDictionary;

@interface AWEAdSifSchemaParam : BDASifSchemaParam

@property (copy, nonatomic) NSString *aweModelKey;
@property (nonatomic) BOOL hideReport;
@property (copy, nonatomic) NSDictionary *adInfoDictionary;
@property (nonatomic) BOOL disableAllLocations;
@property (copy, nonatomic) NSString *extraAdType;
@property (nonatomic) BOOL hideSourceLabel;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)paramWithSchemaData:(id)a0;

- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
