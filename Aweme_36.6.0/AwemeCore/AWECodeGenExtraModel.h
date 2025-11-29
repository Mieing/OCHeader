@class NSString, NSArray;

@interface AWECodeGenExtraModel : AWEBaseDataModel

@property (nonatomic) long long now;
@property (copy, nonatomic) NSString *logid;
@property (copy, nonatomic) NSArray *fatalItemIdsArray;
@property (copy, nonatomic) NSString *searchRequestId;
@property (nonatomic) long long startMs;
@property (copy, nonatomic) NSString *webid;
@property (copy, nonatomic) NSString *toidMd5;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
