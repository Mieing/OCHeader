@class NSString;

@interface ApplyParams : IESLivePBBaseMessage

@property (nonatomic) long long vendor;
@property (nonatomic) long long roomId;
@property (nonatomic) long long toRoomId;
@property (copy, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSString *secToUserId;
@property (nonatomic) long long applyType;
@property (nonatomic) long long scene;
@property (nonatomic) long long channelId;
@property (copy, nonatomic) NSString *signExtra;
@property (copy, nonatomic) NSString *clientAttachedInfo;
@property (nonatomic) int pictureClipType;

+ (id)descriptor;

@end
