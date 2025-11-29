@class NSString, AWEECOMShopExtraConfigModel;

@interface AWEECOMIMInputViewOptions : NSObject

@property (nonatomic) long long shopId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *encodeShopId;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *sourceOrderId;
@property (copy, nonatomic) NSString *sourceProductId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fromSource;
@property (copy, nonatomic) NSString *imcloudConversationId;
@property (copy, nonatomic) NSString *imcloudConversationShortId;
@property (copy, nonatomic) NSString *sendId;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *isTop;
@property (copy, nonatomic) NSString *isMute;
@property (copy, nonatomic) NSString *urlContextParams;
@property (retain, nonatomic) AWEECOMShopExtraConfigModel *shopExtraConfig;
@property (copy, nonatomic) NSString *bizServiceEntityID;
@property (copy, nonatomic) NSString *pigeonServiceEntityID;

- (void).cxx_destruct;

@end
