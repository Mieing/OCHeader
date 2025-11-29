@class NSString;

@interface HTSLiveChangeRoomInfo : IESLivePBBaseMessage

@property (nonatomic) int hasChangeRoom;
@property (nonatomic) long long beforeRoomId;
@property (copy, nonatomic) NSString *beforeAnchorId;

+ (id)descriptor;

@end
