@class NSString, UILabel, AWESearchScanPopEntranceConfig, BDImageView;

@interface AWESearchScanPopEntranceView : UIView <DUXPopoverContent>

@property (retain, nonatomic) AWESearchScanPopEntranceConfig *config;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BDImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (void)configUI;
- (void)updateImage:(id)a0;
- (long long)getCurrentThemeStyle;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
