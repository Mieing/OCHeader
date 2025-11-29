@class NSString, UIImageView, UILabel, AFDStoryPlayInteracionMultiAvatarView;
@protocol AWETemplateTagsTemplateViewDelegate;

@interface AFDStoryPlayInteractionLikeTagView : UIView <AWETemplateTagsTemplateViewProtocol>

@property (retain, nonatomic) AFDStoryPlayInteracionMultiAvatarView *avatarView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (weak, nonatomic) id<AWETemplateTagsTemplateViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertLikeUserWithModel:(id)a0;
- (void)removeLikeUserWithModel:(id)a0;
- (id)getContentText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
