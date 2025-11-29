@class HTSLiveUser, NSString, NSMutableArray, IESLiveListUserTag;

@interface IESLivelinkmicAudienceRecommendItem : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (retain, nonatomic) HTSLiveUser *anchor;
@property (nonatomic) BOOL hasAnchor;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (retain, nonatomic) IESLiveListUserTag *tag;
@property (nonatomic) BOOL hasTag;
@property (copy, nonatomic) NSString *roomTitle;
@property (nonatomic) int recommendType;

+ (id)descriptor;

@end
