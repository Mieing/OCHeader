@class MMFinderLiveGenericPickerItem, UILabel, UIImageView;

@interface MMFinderLiveGenericPickerItemView : UIView

@property (retain, nonatomic) MMFinderLiveGenericPickerItem *item;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *imgView;

- (void)setupUI;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
