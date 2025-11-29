@class NSString;

@interface IESECMallDeepFeedProductCoverImageInfo : IESECURLModel

@property (nonatomic) long long URLType;
@property (copy, nonatomic) NSString *placeHolderImageURL;
@property (copy, nonatomic) id /* block */ imageLoadingCompleteBlock;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
