@class NSString, HTSLiveRelaxVideoFragmentStats, HTSLiveRelaxRoomChatData, NSMutableArray;

@interface HTSLiveRelaxHistoryPrecipitationDetail : IESLivePBBaseMessage

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isHide;
@property (retain, nonatomic) NSMutableArray *momentListArray;
@property (readonly, nonatomic) unsigned long long momentListArray_Count;
@property (retain, nonatomic) NSMutableArray *recordListArray;
@property (readonly, nonatomic) unsigned long long recordListArray_Count;
@property (retain, nonatomic) NSMutableArray *replayListArray;
@property (readonly, nonatomic) unsigned long long replayListArray_Count;
@property (nonatomic) long long totalUser;
@property (retain, nonatomic) NSMutableArray *unpublishMomentListArray;
@property (readonly, nonatomic) unsigned long long unpublishMomentListArray_Count;
@property (retain, nonatomic) NSMutableArray *unpublishReplayListArray;
@property (readonly, nonatomic) unsigned long long unpublishReplayListArray_Count;
@property (nonatomic) int type;
@property (nonatomic) long long foldCount;
@property (nonatomic) long long foldMaxTime;
@property (copy, nonatomic) NSString *roomIdStr;
@property (retain, nonatomic) NSMutableArray *recreationMomentListArray;
@property (readonly, nonatomic) unsigned long long recreationMomentListArray_Count;
@property (retain, nonatomic) NSMutableArray *unpublishRecreationMomentListArray;
@property (readonly, nonatomic) unsigned long long unpublishRecreationMomentListArray_Count;
@property (retain, nonatomic) HTSLiveRelaxVideoFragmentStats *videoFragmentStats;
@property (nonatomic) BOOL hasVideoFragmentStats;
@property (nonatomic) int paidLiveType;
@property (retain, nonatomic) HTSLiveRelaxRoomChatData *chatData;
@property (nonatomic) BOOL hasChatData;
@property (nonatomic) int subscribeType;
@property (retain, nonatomic) NSMutableArray *ecomExplainReplayListArray;
@property (readonly, nonatomic) unsigned long long ecomExplainReplayListArray_Count;

+ (id)descriptor;

@end
