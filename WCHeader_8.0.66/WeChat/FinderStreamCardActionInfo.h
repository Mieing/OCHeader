@class FinderStreamRequest, FinderGetRelatedListReq;

@interface FinderStreamCardActionInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) FinderStreamRequest *streamReq;
@property (retain, nonatomic) FinderGetRelatedListReq *getRelatedListReq;

+ (void)initialize;

@end
