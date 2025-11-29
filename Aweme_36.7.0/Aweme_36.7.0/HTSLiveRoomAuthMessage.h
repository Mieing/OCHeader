@class HTSLiveCommon;

@interface HTSLiveRoomAuthMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) BOOL showUserCard;

+ (id)descriptor;

@end
