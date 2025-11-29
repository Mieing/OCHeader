@class NSString, NSArray;

@interface AWESearchAIGCVideoRSModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *imageURI;
@property (nonatomic) long long imageWidth;
@property (nonatomic) long long imageHeight;
@property (copy, nonatomic) NSArray *imageURLList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
