@class HTSLiveMessageListNode;
@protocol IESLiveMessageListCellViewDelegate;

@interface IESLiveChatChannelBaseCell : UITableViewCell

@property (retain, nonatomic) HTSLiveMessageListNode *node;
@property (weak, nonatomic) id<IESLiveMessageListCellViewDelegate> delegate;
@property (nonatomic) BOOL enableTouchOpt;

+ (id)live_cellIdentifier;

- (void)refreshWith:(id)a0;
- (void)longPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)loadView;
- (void)singleTap:(id)a0;

@end
