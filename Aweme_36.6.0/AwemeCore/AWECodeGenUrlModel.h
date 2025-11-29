@class AWECodeGenImagePreviewModel, NSString, NSArray, NSDictionary, AWECodeGenCompressedUrlListModel, AWEURLModel;

@interface AWECodeGenUrlModel : AWEBaseDataModel

@property (readonly, nonatomic) AWEURLModel *urlModel;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlArray;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (copy, nonatomic) NSString *urlKey;
@property (nonatomic) long long dataSize;
@property (copy, nonatomic) NSString *fileHash;
@property (nonatomic) BOOL invalid;
@property (copy, nonatomic) NSString *fileCs;
@property (copy, nonatomic) NSString *playerAccessKey;
@property (copy, nonatomic) NSString *lightCoverColor;
@property (copy, nonatomic) NSString *darkCoverColor;
@property (copy, nonatomic) NSString *coverType;
@property (copy, nonatomic) NSString *tmplCode;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWECodeGenCompressedUrlListModel *compressedUrlListModel;
@property (copy, nonatomic) NSString *bgimgUrl;
@property (retain, nonatomic) AWECodeGenImagePreviewModel *coverPreviewModel;

+ (id)AWECodeGenUrlModel_Adapter_localPropertyKeysMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
