@class NSString, NSDictionary;

@interface AWEFantaSSHomepageDocIDItemModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *docID;
@property (nonatomic) long long clientRank;
@property (nonatomic) long long recomRank;
@property (nonatomic) long long userAct;
@property (nonatomic) long long stayTime;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateUserAct:(long long)a0;
- (void).cxx_destruct;

@end
