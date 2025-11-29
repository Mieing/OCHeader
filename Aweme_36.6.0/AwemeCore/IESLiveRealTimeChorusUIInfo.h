@class NSString, NSMutableDictionary, NSMutableArray;

@interface IESLiveRealTimeChorusUIInfo : IESLivePBBaseMessage

@property (nonatomic) long long chorusId;
@property (nonatomic) long long segment;
@property (retain, nonatomic) NSMutableDictionary *userInfos;
@property (readonly, nonatomic) unsigned long long userInfos_Count;
@property (nonatomic) BOOL isAnchorJoinedChorus;
@property (nonatomic) long long chorusMode;
@property (retain, nonatomic) NSMutableArray *chorusLeaderArray;
@property (readonly, nonatomic) unsigned long long chorusLeaderArray_Count;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *chorusIdStr;
@property (retain, nonatomic) NSMutableArray *chorusLeaderStrArray;
@property (readonly, nonatomic) unsigned long long chorusLeaderStrArray_Count;
@property (nonatomic) BOOL isChorusChatMode;

+ (id)descriptor;

@end
