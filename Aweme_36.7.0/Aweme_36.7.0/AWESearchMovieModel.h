@class NSString;

@interface AWESearchMovieModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *coverURL;
@property (nonatomic) long long releaseType;
@property (copy, nonatomic) NSString *hashtagID;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isMediumAnchor;
@property (copy, nonatomic) NSString *cid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
