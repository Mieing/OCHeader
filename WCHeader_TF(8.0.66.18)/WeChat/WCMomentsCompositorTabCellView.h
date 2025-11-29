@class UILabel, NSString, UIView;

@interface WCMomentsCompositorTabCellView : UICollectionViewCell {
    NSString *_currentText;
    BOOL _currentSelected;
}

@property (retain, nonatomic) UILabel *tabTitleLabel;
@property (retain, nonatomic) UIView *underlineView;

+ (id)cellIdentifier;

- (void)loadTabCellViewModel:(id)a0;
- (void).cxx_destruct;

@end
