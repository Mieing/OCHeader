@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenAigcResourceModel : AWEBaseDataModel

@property (nonatomic) long long mediaType;
@property (nonatomic) long long materialType;
@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) AWECodeGenUrlModel *urlModel;
@property (copy, nonatomic) NSString *binaryData;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AWECodeGenUrlModel *coverModel;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
