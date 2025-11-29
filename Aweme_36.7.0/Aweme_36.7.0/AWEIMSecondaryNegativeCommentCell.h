@class YYLabel, UIButton, NSString;

@interface AWEIMSecondaryNegativeCommentCell : AWEIMSecondaryCommentCell <AWEUserMessage>

@property (nonatomic) BOOL isDislikeBtnAnimated;
@property (retain, nonatomic) YYLabel *mentionTipLabel;
@property (retain, nonatomic) UIButton *userBlockButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0;
+ (id)identifier;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)configWithModel:(id)a0;
- (void)dislikeButtonTapped:(id)a0;
- (void)commentDeleteNotification:(id)a0;
- (void)deleteTapped:(id)a0;
- (void)updateDislikeState:(BOOL)a0;
- (void)updateUserBlockState:(BOOL)a0;
- (void)updateDeleteLabelState;
- (void)updateCommonViewsAnchor;
- (void)updateMentionLabelAnchor;
- (void)updateBottomButtonsAnchor;
- (void)updateMentionLabelAttribute:(id)a0 mentionStr:(id)a1;
- (void)userBlockTapped:(id)a0;
- (id)commentMentionTimeAttributedStringWithModel:(id)a0 mentionStr:(id)a1;
- (void)updateFoldCommentState:(BOOL)a0;
- (id)flodCommentAttributedString:(id)a0 content:(id)a1;
- (id)contentLabelAttributedWithoutTimeStringWithModel:(id)a0;
- (id)truncationAttributedWithoutTimeStringWithModel:(id)a0;
- (void)commentDislikeActionNotification:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)addObservers;

@end
