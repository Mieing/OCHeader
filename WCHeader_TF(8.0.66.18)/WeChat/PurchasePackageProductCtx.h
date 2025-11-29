@class NSData;

@interface PurchasePackageProductCtx : WXPBGeneratedMessage

@property (nonatomic) unsigned int weixinUin;
@property (nonatomic) unsigned long long finderUin;
@property (retain, nonatomic) NSData *sysCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;

+ (void)initialize;

@end
