@class NSString, HTSLiveText;

@interface GetRoomPanelResponse_RoomStats : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *statsTitle;
@property (copy, nonatomic) NSString *statsValue;
@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *statsTitleType;
@property (copy, nonatomic) NSString *textString;
@property (nonatomic) int changeStatus;

+ (id)descriptor;

@end
