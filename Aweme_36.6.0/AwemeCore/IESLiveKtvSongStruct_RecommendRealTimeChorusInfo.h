@class NSString, NSMutableArray;

@interface IESLiveKtvSongStruct_RecommendRealTimeChorusInfo : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (retain, nonatomic) NSMutableArray *showUsersArray;
@property (readonly, nonatomic) unsigned long long showUsersArray_Count;
@property (copy, nonatomic) NSString *desc;

+ (id)descriptor;

@end
