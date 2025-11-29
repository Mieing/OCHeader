@class NSString, UIImageView, AWEMusicModel, UILabel, AWEInsetsLabel;

@interface AWECommentListHeaderExtraSongView : UIView <AWECommentListCustomExtraViewProtocol>

@property (retain, nonatomic) AWEMusicModel *model;
@property (retain, nonatomic) UIImageView *albumImageView;
@property (retain, nonatomic) UIImageView *albumBackView;
@property (retain, nonatomic) UIImageView *albumPlayView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEInsetsLabel *tagLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (nonatomic) BOOL isBGColorWhite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)customViewHeightInCommentListHeader;
- (id)initWithMusicModel:(id)a0;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)_setupUI;

@end
