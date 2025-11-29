@class NSString, AWECodeGenAnchorToastModel, AWECodeGenUrlModel;

@interface AWECodeGenAnchorPublishModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *webUrl;
@property (retain, nonatomic) AWECodeGenUrlModel *addedIconModel;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isBeta;
@property (copy, nonatomic) NSString *hashtag;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long scope;
@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) AWECodeGenAnchorToastModel *toastContentModel;
@property (copy, nonatomic) NSString *bizSource;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
