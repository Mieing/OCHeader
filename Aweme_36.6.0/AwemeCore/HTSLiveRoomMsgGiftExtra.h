@class NSString, HTSLiveImage;

@interface HTSLiveRoomMsgGiftExtra : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long giftCount;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) HTSLiveImage *webpImage;
@property (nonatomic) BOOL hasWebpImage;
@property (nonatomic) long long groupId;
@property (nonatomic) int clientGiftSource;
@property (copy, nonatomic) NSString *describe;
@property (nonatomic) long long diamondCount;

+ (id)descriptor;

@end
