@class NSString, NSMutableArray;

@interface HTSLiveAIWishGiftInfo : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (nonatomic) int errorType;
@property (retain, nonatomic) NSMutableArray *avatarUrlsArray;
@property (readonly, nonatomic) unsigned long long avatarUrlsArray_Count;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *giftType;
@property (nonatomic) int assetId;
@property (nonatomic) int toUserType;
@property (copy, nonatomic) NSString *wishText;
@property (nonatomic) int multiAssetId;
@property (copy, nonatomic) NSString *bizInfo;

+ (id)descriptor;

@end
