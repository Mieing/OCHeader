@class CContact, UILabel, UIView, UIButton;
@protocol WCContactItemDeleteViewDelegate;

@interface WCContactItemDeleteView : MMUIView {
    UILabel *_displayNameLabel;
    UIView *_headImageView;
    UIButton *_deleteButton;
}

@property (retain, nonatomic) CContact *contact;
@property (weak, nonatomic) id<WCContactItemDeleteViewDelegate> deleteViewDelegate;

- (void)initDeleteButton;
- (void)initHeadImage;
- (void)initDisplayName;
- (void)onClickHeadImage;
- (void)onClickDeleteButton;
- (id)initWithContact:(id)a0;
- (void).cxx_destruct;

@end
