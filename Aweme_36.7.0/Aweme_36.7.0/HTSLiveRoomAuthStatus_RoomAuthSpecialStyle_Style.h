@class NSString;

@interface HTSLiveRoomAuthStatus_RoomAuthSpecialStyle_Style : IESLivePBBaseMessage

@property (nonatomic) int unableStyle;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) int offType;
@property (nonatomic) int anchorSwitch;
@property (copy, nonatomic) NSString *switchStatusTipMsg;
@property (copy, nonatomic) NSString *switchStatusAnchorTipMsg;
@property (nonatomic) int anchorSwitchForPaidLive;
@property (copy, nonatomic) NSString *contentForPaidLive;

+ (id)descriptor;

- (void)setAnchorSwitch:(int)a0;
- (void)setContent:(id)a0;

@end
