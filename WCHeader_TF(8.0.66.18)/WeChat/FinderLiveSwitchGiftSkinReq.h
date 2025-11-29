@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderLiveSwitchGiftSkinReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *skinId;
@property (retain, nonatomic) NSString *customText;
@property (nonatomic) unsigned int textOpType;
@property (nonatomic) BOOL needSwitchSkin;
@property (nonatomic) unsigned int giftType;
@property (retain, nonatomic) NSMutableArray *componentKeyList;

+ (void)initialize;

@end
