@class BaseRequest, MegaVideoBaseRequest, NSString;

@interface MegaVideoLikeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MegaVideoBaseRequest *megaBasereq;
@property (nonatomic) unsigned long long videoObjectId;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned long long likeId;
@property (retain, nonatomic) NSString *videoNonceId;

+ (void)initialize;

@end
