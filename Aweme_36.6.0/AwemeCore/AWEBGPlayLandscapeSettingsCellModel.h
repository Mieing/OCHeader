@class NSString, NSArray;

@interface AWEBGPlayLandscapeSettingsCellModel : NSObject

@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long cellType;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *contentForBigFont;
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
