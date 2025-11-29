@class NSString, NSMutableArray;

@interface IESLiveRoomLinkerContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (nonatomic) int roomLinkSilenceStatus;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long isAnchorBackground;
@property (nonatomic) long long version;
@property (nonatomic) long long liveRoomMode;

+ (id)descriptor;

@end
