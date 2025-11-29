@class BaseRequest, NSData, FinderBaseRequest, FinderClientStatus, FinderPromotionStreamNativeDramaContext;

@interface FinderPromotionStreamReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int pullType;
@property (nonatomic) unsigned int displayTabType;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) FinderPromotionStreamNativeDramaContext *finderNativeDramaContext;

+ (void)initialize;

@end
