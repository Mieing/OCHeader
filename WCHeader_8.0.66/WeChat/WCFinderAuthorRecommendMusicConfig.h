@class NSString;

@interface WCFinderAuthorRecommendMusicConfig : NSObject

@property (copy, nonatomic) NSString *listen_id;
@property (nonatomic) long long like_state;

- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)a0;
- (id)initWithJSONString:(id)a0;
- (void).cxx_destruct;

@end
