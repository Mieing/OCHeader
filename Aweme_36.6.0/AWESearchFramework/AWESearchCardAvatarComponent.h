@class UIView, NSString, UITapGestureRecognizer, AWESearchLiveMarkView, UIImageView, NSDictionary, AWESearchEventDispather, AWESearchCardAvatarComponentModel;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchCardAvatarComponent : AWESearchComponent <AWESearchCardAvatarComponentProtocol>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *verifyView;
@property (retain, nonatomic) AWESearchLiveMarkView *liveMarkView;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UIImageView *topicView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchCardAvatarComponentModel *componentModel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ clickAvatarImageBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })avatarSizeWith:(unsigned long long)a0;

@end
