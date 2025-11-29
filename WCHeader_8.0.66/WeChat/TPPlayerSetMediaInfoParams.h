@class NSString;

@interface TPPlayerSetMediaInfoParams : NSObject

@property (nonatomic) long long playerId;
@property (copy, nonatomic) NSString *mediaId;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlToken;
@property (copy, nonatomic) NSString *decodeKey;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (nonatomic) long long videoDuration;
@property (copy, nonatomic) NSString *fileFormat;
@property (copy, nonatomic) NSString *thumbPath;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *thumbUrlToken;
@property (nonatomic) BOOL isLocal;

+ (id)makeWithPlayerId:(long long)a0 mediaId:(id)a1 path:(id)a2 url:(id)a3 urlToken:(id)a4 decodeKey:(id)a5 videoWidth:(long long)a6 videoHeight:(long long)a7 videoDuration:(long long)a8 fileFormat:(id)a9 thumbPath:(id)a10 thumbUrl:(id)a11 thumbUrlToken:(id)a12 isLocal:(BOOL)a13;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
