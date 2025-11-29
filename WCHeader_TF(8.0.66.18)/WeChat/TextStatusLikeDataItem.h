@class NSString;

@interface TextStatusLikeDataItem : NSObject

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long likeId;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) BOOL notifyFlag;
@property (nonatomic) BOOL deleteFlag;
@property (retain, nonatomic) NSString *textStateId;
@property (retain, nonatomic) NSString *hashname;
@property (retain, nonatomic) NSString *encodeUsername;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImageURL;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long likeCountVersion;
@property (nonatomic) unsigned int source;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
