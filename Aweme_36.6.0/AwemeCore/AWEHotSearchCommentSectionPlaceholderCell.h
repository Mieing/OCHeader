@class NSString, AWECommonFeedSectionContext, UIView;
@protocol AWECommonFeedCellModelProtocol;

@interface AWEHotSearchCommentSectionPlaceholderCell : UICollectionViewCell <AWECommonFeedCellProtocol>

@property (retain, nonatomic) UIView *placeholderView;
@property (retain, nonatomic) UIView *placeholderAvatarImage;
@property (retain, nonatomic) UIView *placeholderNickname;
@property (retain, nonatomic) UIView *placeholderLineOne;
@property (retain, nonatomic) UIView *placeholderLineTwo;
@property (retain, nonatomic) UIView *placeholderLineThree;
@property (retain, nonatomic) UIView *placeholderVideoSource;
@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasVideo;

@end
