@class NSString;

@interface FinderSyncProductInfoReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *shopRequestId;
@property (nonatomic) unsigned int needUpdateUrl;

+ (void)initialize;

@end
