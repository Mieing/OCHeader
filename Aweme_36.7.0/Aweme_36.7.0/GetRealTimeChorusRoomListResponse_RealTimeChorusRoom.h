@class NSString, NSMutableArray, GetRealTimeChorusRoomListResponse_SongInfo;

@interface GetRealTimeChorusRoomListResponse_RealTimeChorusRoom : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) long long anchorId;
@property (retain, nonatomic) NSMutableArray *showUsersArray;
@property (readonly, nonatomic) unsigned long long showUsersArray_Count;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (retain, nonatomic) GetRealTimeChorusRoomListResponse_SongInfo *songInfo;
@property (nonatomic) BOOL hasSongInfo;

+ (id)descriptor;

@end
