@class WCStoryBubbleHeadView, NSString, WCStoryDataItem, WCStoryComment;
@protocol WCStoryCommentsForSelfTableViewCellDelegate;

@interface WCStoryCommentsForSelfTableViewCell : MMTableViewCell <WCStoryBubbleHeadViewDelegate>

@property (retain, nonatomic) WCStoryBubbleHeadView *storyBubbleView;
@property (weak, nonatomic) id<WCStoryCommentsForSelfTableViewCellDelegate> delegate;
@property (retain, nonatomic) WCStoryComment *comment;
@property (retain, nonatomic) WCStoryDataItem *dataItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initViews;
- (void)updateVoiceOverState;
- (void)setRightFunctionalBtnHidden:(BOOL)a0;
- (void)WCStoryBubbleHeadViewHeadImageDidClick:(id)a0;
- (void)WCStoryBubbleHeadViewHeadImageDidDoubleClick:(id)a0;
- (void)WCStoryBubbleHeadViewBlurEffectViewDidClick:(id)a0;
- (void)WCStoryBubbleHeadViewDeleteBtnDidClick:(id)a0;
- (void)WCStoryBubbleHeadViewDeleteBtnDidCancel:(id)a0;
- (void)WCStoryBubbleHeadViewReplyBtnDidClick:(id)a0;
- (void).cxx_destruct;

@end
