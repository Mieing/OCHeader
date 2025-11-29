@class UIStackView, NSString, UIImageView, AWEIMTaskCardListCellItem, UILabel, UIView, AWEIMTaskConversationCardModel;

@interface AWEIMTaskConversationDetailCell : AWEIMSwipeTableViewCell <AWEIMRendererProtocol>

@property (retain, nonatomic) UIImageView *companyIconImageView;
@property (retain, nonatomic) UILabel *companyNameLabel;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UIView *sourceContainerView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (copy, nonatomic) NSString *timeText;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UILabel *unreadLabel;
@property (retain, nonatomic) UIView *muteUnreadDotView;
@property (retain, nonatomic) UIView *separatorLineView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *muteImageView;
@property (retain, nonatomic) AWEIMTaskCardListCellItem *pageItem;
@property (retain, nonatomic) AWEIMTaskConversationCardModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__updateUnreadCount;
- (id)displayAttributeContent:(id)a0;
- (id)convertUnreadCountToAttrString:(long long)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
