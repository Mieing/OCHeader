@class NSString, HTSLiveShareAnchorInfo, HTSLiveGameAnchorInfo;

@interface HTSLiveRoomAnchorData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *finishSchema;
@property (retain, nonatomic) HTSLiveGameAnchorInfo *gameAnchorInfo;
@property (nonatomic) BOOL hasGameAnchorInfo;
@property (copy, nonatomic) NSString *frameScale;
@property (copy, nonatomic) NSString *groupIdList;
@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) HTSLiveShareAnchorInfo *shareAnchorInfo;
@property (nonatomic) BOOL hasShareAnchorInfo;

+ (id)descriptor;

@end
