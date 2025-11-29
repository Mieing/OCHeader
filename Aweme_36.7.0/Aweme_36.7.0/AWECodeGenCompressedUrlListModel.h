@class NSString, NSArray;

@interface AWECodeGenCompressedUrlListModel : AWEBaseDataModel

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *uriCommon;
@property (copy, nonatomic) NSString *paramCommon;
@property (copy, nonatomic) NSArray *urlArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
