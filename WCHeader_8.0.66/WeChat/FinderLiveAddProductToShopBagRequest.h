@class NSString, NSData, BaseRequest;

@interface FinderLiveAddProductToShopBagRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSData *productBuffer;
@property (nonatomic) unsigned int reqScene;
@property (retain, nonatomic) BaseRequest *baseRequest;

+ (void)initialize;

@end
