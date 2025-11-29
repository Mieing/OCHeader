@class HTSLiveMatchRoomData;

@interface HTSLiveActivityData : IESLivePBBaseMessage

@property (nonatomic) BOOL xgPlay;
@property (retain, nonatomic) HTSLiveMatchRoomData *match;
@property (nonatomic) BOOL hasMatch;

+ (id)descriptor;

@end
