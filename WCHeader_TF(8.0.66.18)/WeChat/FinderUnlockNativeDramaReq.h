@class BaseRequest, FinderBaseRequest, FinderUnlockNativeDramaPromotionAdGating;

@interface FinderUnlockNativeDramaReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int unlockType;
@property (nonatomic) unsigned long long nativeDramaId;
@property (nonatomic) unsigned long long episodeObjectId;
@property (retain, nonatomic) FinderUnlockNativeDramaPromotionAdGating *adGating;

+ (void)initialize;

@end
