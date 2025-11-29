@class UIColor, NSString, UIFont, NSArray;
@protocol AWESettingSectionModelBizAbilityProtocol, AWEUserSettingBigFontAdapterProtocol;

@interface AWESettingSectionModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *sectionHeaderTitle;
@property (nonatomic) double sectionHeaderHeight;
@property (retain, nonatomic) UIColor *sectionHeaderTitleColor;
@property (retain, nonatomic) UIFont *sectionHeaderTitleFont;
@property (nonatomic) double sectionHeaderTitleLeading;
@property (retain, nonatomic) NSArray *itemArray;
@property (copy, nonatomic) NSString *sectionFooterTitle;
@property (nonatomic) BOOL useNewFooterLayout;
@property (nonatomic) BOOL hasClearOnce;
@property (retain, nonatomic) id<AWEUserSettingBigFontAdapterProtocol> fontAdapter;
@property (nonatomic) BOOL needUseCardUI;
@property (nonatomic) BOOL shouldEmphasisTitle;
@property (nonatomic) BOOL bottomCardUI;
@property (retain, nonatomic) id<AWESettingSectionModelBizAbilityProtocol> bizAbilityImpl;

- (void).cxx_destruct;
- (id)init;

@end
