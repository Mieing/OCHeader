@class UILabel, UIColor, UIView;

@interface AWEDouyinDiskSpaceIndicator : UIView

@property (retain, nonatomic) UIView *douyinSpaceIndicator;
@property (nonatomic) double appSizeScale;
@property (nonatomic) double othersSizeScale;
@property (nonatomic) unsigned long long appSizeBytes;
@property (nonatomic) unsigned long long systemFreeSizeBytes;
@property (nonatomic) unsigned long long totalSizeBytes;
@property (retain, nonatomic) UILabel *appSizeStringLabel;
@property (retain, nonatomic) UILabel *appSizePercentInfoLabel;
@property (retain, nonatomic) UIView *indicatorContainerView;
@property (retain, nonatomic) UIView *othersSpaceIndicator;
@property (retain, nonatomic) UIView *freeSpaceIndicator;
@property (retain, nonatomic) UIView *dummyWidthView;
@property (retain, nonatomic) UIView *dummyMinView;
@property (readonly, nonatomic) UIColor *appColor;
@property (readonly, nonatomic) UIColor *freeSpaceColor;
@property (readonly, nonatomic) UIColor *othersColor;
@property (nonatomic) long long progress;

- (void)updateUIWithAppSize:(unsigned long long)a0 totalSize:(double)a1 freeSize:(double)a2;
- (void)updateUIWithCacheSize:(double)a0;
- (id)appSizePercentInfoString;
- (void)setupIndicators;
- (void).cxx_destruct;
- (id)deviceName;
- (id)init;
- (void)setup;
- (id)appShortName;
- (id)appDisplayName;

@end
