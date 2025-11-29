@class NSString, FinderGetLiveMsgResp;

@interface FinderGetLiveMsgWithOffsetResponse_FrameItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int frameOffsetInSecond;
@property (retain, nonatomic) FinderGetLiveMsgResp *getLiveMsgResponse;
@property (retain, nonatomic) NSString *frameId;

+ (void)initialize;

@end
