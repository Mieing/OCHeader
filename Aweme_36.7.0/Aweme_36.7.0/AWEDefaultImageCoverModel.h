@class NSString, NSArray;

@interface AWEDefaultImageCoverModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSArray *urlList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
