@class NSArray, NSString;

@interface AWECommentInputFastEmojiBar : UIStackView <AWECommentInputFastEmojiBarProtocol>

@property (copy, nonatomic) NSArray *recentEmotIcons;
@property (copy, nonatomic) id /* block */ clickedCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEmotIconClick:(id)a0;
- (void)updateEmoji;
- (void).cxx_destruct;
- (double)barWidth;
- (id)init;
- (void)setupUI;

@end
