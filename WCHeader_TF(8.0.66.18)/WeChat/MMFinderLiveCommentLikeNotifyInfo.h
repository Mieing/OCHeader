@class NSString, UIColor, CEmoticonWrap;

@interface MMFinderLiveCommentLikeNotifyInfo : NSObject

@property (nonatomic) unsigned long long originalCommentType;
@property (retain, nonatomic) NSString *originalCommentText;
@property (retain, nonatomic) CEmoticonWrap *originalCommentEmoticonWrap;
@property (retain, nonatomic) UIColor *notifyBackgroundColor;
@property (retain, nonatomic) NSString *originalCommentClientMsgId;
@property (retain, nonatomic) NSString *originalCommentLocalClientMsgId;

- (id)initWithAppMsgLikeNotifyInfo:(id)a0 forTaskId:(id)a1 boxId:(id)a2;
- (void)configWithOriginMsgKindLiveMsg:(id)a0 forTaskId:(id)a1 boxId:(id)a2;
- (void)configWithOriginMsgKindLiveAppMsg:(id)a0 forTaskId:(id)a1 boxId:(id)a2;
- (void).cxx_destruct;

@end
