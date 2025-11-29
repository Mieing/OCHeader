@class UILabel, NSString, IESECUIImageView;

@interface IESECMallDeepFeedSearchView : UIButton

@property (retain, nonatomic) IESECUIImageView *searchImageView;
@property (retain, nonatomic) UILabel *searchLabel;
@property (retain, nonatomic) IESECUIImageView *searchImageArrow;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) BOOL hasKeyword;

- (void)searchViewClick:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithNewModel:(id)a0;

@end
