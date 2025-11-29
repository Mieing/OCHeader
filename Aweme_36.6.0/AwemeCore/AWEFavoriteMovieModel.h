@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEFavoriteMovieModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *movieID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *doubanRate;
@property (copy, nonatomic) NSString *maoyanRate;
@property (copy, nonatomic) NSArray *actorNames;
@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *statusDesc;
@property (copy, nonatomic) NSString *ticketBuyText;
@property (copy, nonatomic) NSString *ticketBuyUrl;
@property (nonatomic) long long ticketBuyType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *releaseAreas;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *playSourceList;
@property (copy, nonatomic) NSString *typeName;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)typeTitle;

@end
