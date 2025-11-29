@class NSMutableArray, BaseResponse;

@interface FinderLiveDecryptResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *decryptedItemList;

+ (void)initialize;

@end
