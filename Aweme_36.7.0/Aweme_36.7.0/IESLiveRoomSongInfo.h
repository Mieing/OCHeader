@class NSMutableArray, IESLiveMVBaseInfo;

@interface IESLiveRoomSongInfo : IESLivePBBaseMessage

@property (nonatomic) long long songId;
@property (retain, nonatomic) IESLiveMVBaseInfo *mvBaseInfo;
@property (nonatomic) BOOL hasMvBaseInfo;
@property (retain, nonatomic) NSMutableArray *mvColorListArray;
@property (readonly, nonatomic) unsigned long long mvColorListArray_Count;

+ (id)descriptor;

@end
