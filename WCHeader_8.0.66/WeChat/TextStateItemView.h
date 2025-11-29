@class UIColor, CContact, UIImageView, NSString, MMWebImageView, MMUILabel;

@interface TextStateItemView : UIView <TextStateMgrExt, WCTextStateDBExt> {
    BOOL m_bShowTitle;
}

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) MMWebImageView *stateEmojiImageView;
@property (retain, nonatomic) MMUILabel *stateTextLabel;
@property (nonatomic) struct CGSize { double width; double height; } stateEmojiSize;
@property (retain, nonatomic) UIImageView *unreadImageView;
@property (retain, nonatomic) UIColor *emojiTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContact:(id)a0;
- (id)initWithContact:(id)a0 stateEmojiSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithContact:(id)a0 showTitle:(BOOL)a1;
- (id)initWithContact:(id)a0 stateEmojiSize:(struct CGSize { double x0; double x1; })a1 showTitle:(BOOL)a2;
- (void)setupUI;
- (void)sizeToFit;
- (void)updateWithContact:(id)a0;
- (void)onTextStateUpdateForUserName:(id)a0;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)onTextStateRead:(id)a0 username:(id)a1;
- (void).cxx_destruct;

@end
