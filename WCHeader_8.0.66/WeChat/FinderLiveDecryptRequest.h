@class BaseRequest, FinderBaseRequest, NSMutableArray;

@interface FinderLiveDecryptRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *encryptedItemList;

+ (void)initialize;

@end
