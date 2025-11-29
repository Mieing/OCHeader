@class NSString;

@interface IESLiveAioLinkCoreRoomInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *secAnchorId;

+ (id)descriptor;

@end
