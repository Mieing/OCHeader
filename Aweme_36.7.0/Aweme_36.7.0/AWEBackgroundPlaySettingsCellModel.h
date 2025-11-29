@class NSString, NSArray, UIImage, UIView, NSAttributedString;

@interface AWEBackgroundPlaySettingsCellModel : NSObject

@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIView *rightView;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *contentForBigFont;
@property (nonatomic) BOOL adapterTheme;
@property (nonatomic) BOOL isSubList;
@property (nonatomic) BOOL isOn;
@property (copy, nonatomic) id /* block */ switchChangedBlock;
@property (copy, nonatomic) id /* block */ willDisPlayBlock;
@property (copy, nonatomic) id /* block */ selectedChangedBlock;
@property (copy, nonatomic) NSArray *collectionList;
@property (nonatomic) long long selectedSettingsType;
@property (copy, nonatomic) id /* block */ collectionChangedBlock;

- (void).cxx_destruct;

@end
