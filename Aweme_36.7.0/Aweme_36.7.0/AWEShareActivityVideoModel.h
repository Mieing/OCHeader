@class NSString, NSArray;

@interface AWEShareActivityVideoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *coverURL;
@property (retain, nonatomic) NSArray *urlList;
@property (nonatomic) int width;
@property (nonatomic) int height;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
