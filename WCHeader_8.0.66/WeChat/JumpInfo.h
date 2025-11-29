@class NSString, HalfScreen, WeappJumpInfo, ChatroomSeq;

@interface JumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) WeappJumpInfo *weappJumpInfo;
@property (retain, nonatomic) HalfScreen *halfScreen;
@property (retain, nonatomic) ChatroomSeq *chatroomSeq;
@property (retain, nonatomic) NSString *preloadId;

+ (void)initialize;

@end
