@class NSString;

@interface AWESearchMovieModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *movieTitle;
@property (copy, nonatomic) NSString *coverURL;
@property (nonatomic) long long releaseType;
@property (copy, nonatomic) NSString *castDesc;
@property (copy, nonatomic) NSString *movieTypeDesc;
@property (copy, nonatomic) NSString *releaseDesc;
@property (copy, nonatomic) NSString *movieScore;
@property (nonatomic) long long wantToSeeCount;
@property (copy, nonatomic) NSString *hashtagID;
@property (copy, nonatomic) NSString *buyTicketURL;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isMediumAnchor;
@property (copy, nonatomic) NSString *cid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
