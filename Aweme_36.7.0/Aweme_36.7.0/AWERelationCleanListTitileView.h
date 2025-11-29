@class UILabel, AWEInsetsLabel;

@interface AWERelationCleanListTitileView : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEInsetsLabel *tagLabel;

- (void)configureContent:(id)a0 tagString:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
