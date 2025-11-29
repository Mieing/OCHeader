@class NSString, NSArray;

@interface AWECoverUploadResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *uri;
@property (readonly, copy, nonatomic) NSArray *urlList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
