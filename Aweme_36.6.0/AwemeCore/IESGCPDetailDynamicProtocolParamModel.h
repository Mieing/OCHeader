@class NSString, IESGCPDetailDynamicProtocolComponentCriteria;

@interface IESGCPDetailDynamicProtocolParamModel : NSObject

@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *promoterID;
@property (retain, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *bizMode;
@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long pageID;
@property (nonatomic) BOOL isPreload;
@property (copy, nonatomic) NSString *promoteInstanceID;
@property (copy, nonatomic) NSString *prefixCacheKey;
@property (retain, nonatomic) IESGCPDetailDynamicProtocolComponentCriteria *componentCriteria;

- (id)initWithGameID:(id)a0 scene:(id)a1 promoterID:(id)a2 enterFrom:(id)a3;
- (id)initWithGameID:(id)a0 scene:(id)a1 promoterID:(id)a2 videoID:(id)a3 roomID:(id)a4 enterFrom:(id)a5 bizMode:(id)a6 bizId:(id)a7 bizType:(long long)a8 extra:(id)a9 pageID:(long long)a10 isPreload:(BOOL)a11 promoteInstanceID:(id)a12 componentCriteria:(id)a13 prefixCacheKey:(id)a14;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requestParams;

@end
