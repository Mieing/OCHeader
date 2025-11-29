@class NSString, UIColor;

@interface MMFinderLiveMoreFunctionItem : NSObject

@property (nonatomic) unsigned long long moreFunctionItemType;
@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) NSString *titleStr;
@property (retain, nonatomic) NSString *detailStr;
@property (retain, nonatomic) UIColor *detailStrColor;
@property (nonatomic) unsigned int detailNum;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL isSwitchDisabled;
@property (retain, nonatomic) NSString *switchDisabledToastText;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) double height;
@property (retain, nonatomic) NSString *imageUrl;
@property (nonatomic) long long reportSubElementId;
@property (nonatomic) long long moreFuncSubElementId;
@property (retain, nonatomic) NSString *redDotPath;
@property (retain, nonatomic) NSString *accessibilityIdentifier;
@property (retain, nonatomic) id detailExtraInfo;
@property (readonly, nonatomic) BOOL isSelectedShadow;

- (id)initWithMoreFunctionItemType:(unsigned long long)a0 cellType:(unsigned long long)a1;
- (void)updateCellType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
