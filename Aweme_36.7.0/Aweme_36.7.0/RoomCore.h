@class NSString;

@interface RoomCore : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *anchorId;

+ (id)descriptor;

@end
