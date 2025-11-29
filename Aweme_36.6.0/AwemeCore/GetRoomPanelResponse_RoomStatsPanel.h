@class NSString, NSMutableArray;

@interface GetRoomPanelResponse_RoomStatsPanel : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *panelTitle;
@property (retain, nonatomic) NSMutableArray *roomStatsArray;
@property (readonly, nonatomic) unsigned long long roomStatsArray_Count;
@property (nonatomic) int panelType;

+ (id)descriptor;

@end
