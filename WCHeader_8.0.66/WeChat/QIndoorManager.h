@class UIView, NSString, QIndoorLevel, QIndoorMapData, QIndoorPicker, QStatisticer, QIndoorBuilding, QMapContext, QUniversalMapCounter;
@protocol QIndoorManagerDelegate;

@interface QIndoorManager : NSObject <QMapContextDelegate, QIndoorPickerDelegate>

@property (retain, nonatomic) QIndoorPicker *picker;
@property (retain, nonatomic) QIndoorBuilding *activeBuilding;
@property (nonatomic) unsigned long long activeLevelIndex;
@property (nonatomic) BOOL indoorPrevilege;
@property (retain, nonatomic) QIndoorMapData *indoorMapData;
@property (copy, nonatomic) NSString *businessKey;
@property (copy, nonatomic) NSString *configDirectoryPath;
@property (copy, nonatomic) NSString *indoorPlistPath;
@property (weak, nonatomic) QMapContext *mapContext;
@property (weak, nonatomic) id<QIndoorManagerDelegate> delegate;
@property (copy, nonatomic) NSString *customFont;
@property (weak, nonatomic) UIView *hostView;
@property (nonatomic, getter=isIndoorEnabled) BOOL indoorEnabled;
@property (nonatomic) BOOL indoorPickerEnabled;
@property (nonatomic) struct CGPoint { double x; double y; } indoorPickerOffset;
@property (retain, nonatomic) QIndoorLevel *activeLevel;
@property (readonly, nonatomic) long long keyType;
@property (retain, nonatomic) QStatisticer *statisticer;
@property (weak, nonatomic) QUniversalMapCounter *indoorUBSCounter;
@property (nonatomic) BOOL darkMode;
@property (nonatomic) double logoAndMapCenterHeight;
@property (nonatomic) BOOL isLogoRightBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setInoorCellInfo:(id)a0;
- (void)resetIndoorCell;
- (void)callDelegateDidChangeActiveBuilding:(id)a0;
- (void)callDelegateDidChangeActiveLevel:(id)a0;
- (BOOL)isAnyIndoorShown;
- (void)createPicker;
- (void)updatePickStatus;
- (void)updatePicker;
- (void)validatePickerFrame:(double)a0;
- (void)indoorPicker:(id)a0 didSelectLevelIndex:(unsigned long long)a1;
- (void)mapContext:(id)a0 didChangeActiveBuilding:(id)a1;
- (void)updateIndoorMapData:(id)a0;
- (void)resetIndoorMapData;
- (void)reloadIndoorMap;
- (void)setActiveIndoorInfo:(id)a0;
- (void)setIndoorMaskColor:(id)a0;
- (double)getIndoorOutlineZoom:(id)a0;
- (void)setActiveBuildsFilter:(id)a0;
- (id)initWithContext:(id)a0 configPreference:(id)a1;
- (void)setupIndoorPlist;
- (void)setupIndoorMapData;
- (void)reloadCurrentState;
- (void)dealloc;
- (void).cxx_destruct;

@end
