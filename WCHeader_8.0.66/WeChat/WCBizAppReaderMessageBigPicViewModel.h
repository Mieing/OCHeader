@class WCMediaItem;

@interface WCBizAppReaderMessageBigPicViewModel : BizAppReaderMessageBigPicViewModel

@property (retain, nonatomic) WCMediaItem *mediaItem;

+ (BOOL)showBigPicWithWCContentItem:(id)a0;

- (id)initWithWCContentItem:(id)a0 title:(id)a1 sourceUsrname:(id)a2 sourceNickname:(id)a3 viewStyle:(id)a4;
- (void)refreshLayout;
- (void).cxx_destruct;

@end
