@class NSString, NSArray, IESIMCodeGenCompressedUrlListModel;

@interface IESIMCodeGenAwemeUrlModel : AWEBaseDataModel

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
@property (retain, nonatomic) IESIMCodeGenCompressedUrlListModel *compressedUrlListModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
