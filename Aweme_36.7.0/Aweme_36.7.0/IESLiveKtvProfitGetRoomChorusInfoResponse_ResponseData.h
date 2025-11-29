@class NSString, NSMutableArray, IESLiveKtvSongStruct;

@interface IESLiveKtvProfitGetRoomChorusInfoResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *chorusId;
@property (nonatomic) long long segment;
@property (copy, nonatomic) NSString *mainSingerUid;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long chorusMode;
@property (retain, nonatomic) NSMutableArray *chorusLeaderArray;
@property (readonly, nonatomic) unsigned long long chorusLeaderArray_Count;
@property (copy, nonatomic) NSString *songIdStr;
@property (retain, nonatomic) NSMutableArray *singersArray;
@property (readonly, nonatomic) unsigned long long singersArray_Count;
@property (nonatomic) BOOL hasFirstReport;
@property (nonatomic) BOOL isMassChorus;
@property (retain, nonatomic) IESLiveKtvSongStruct *song;
@property (nonatomic) BOOL hasSong;
@property (copy, nonatomic) NSString *mainSingerOpenid;
@property (copy, nonatomic) NSString *anchorOpenid;
@property (retain, nonatomic) NSMutableArray *chorusLeaderOpenIdsArray;
@property (readonly, nonatomic) unsigned long long chorusLeaderOpenIdsArray_Count;

+ (id)descriptor;

@end
