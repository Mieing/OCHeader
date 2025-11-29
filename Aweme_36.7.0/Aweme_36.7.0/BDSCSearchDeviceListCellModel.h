@class NSString, BDSCBackgroundUIModel, NSArray;

@interface BDSCSearchDeviceListCellModel : BDSCDeviceListModel

@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) BDSCBackgroundUIModel *background;
@property (copy, nonatomic) NSString *backgroundPlaceholder;
@property (retain, nonatomic) BDSCBackgroundUIModel *selectedBackground;
@property (copy, nonatomic) NSString *selectedColor;
@property (nonatomic) BOOL isSelectedBold;
@property (copy, nonatomic) NSString *tvIcon;
@property (copy, nonatomic) NSString *defaultTvIcon;
@property (nonatomic) double tvIconLeftMargin;
@property (nonatomic) double tvIconSize;
@property (nonatomic) double margin;
@property (nonatomic) double selectMarkMargin;
@property (copy, nonatomic) NSString *selectMarkImageName;
@property (nonatomic) BOOL separatorLine;
@property (copy, nonatomic) NSString *separatorLineColor;
@property (copy, nonatomic) NSArray *tags;
@property (nonatomic) double titleFont;
@property (nonatomic) double titleLeftMargin;

- (void).cxx_destruct;
- (id)init;
- (id)cellIdentifier;

@end
