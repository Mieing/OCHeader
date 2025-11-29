@class UIImage, NSString, MMEasterEggNewYearActivityPageInfo;

@interface MMEasterEggNewYearActivityMaterialInfo : NSObject

@property (nonatomic) unsigned long long materialType;
@property (retain, nonatomic) UIImage *defaultBrandLogo;
@property (retain, nonatomic) NSString *defaultBrandName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSString *defaultButtonTitle;
@property (nonatomic) unsigned long long buttonPageType;
@property (retain, nonatomic) MMEasterEggNewYearActivityPageInfo *buttonPageInfo;
@property (retain, nonatomic) NSString *bottomLinkTitle;
@property (nonatomic) unsigned long long bottomLinkPageType;
@property (retain, nonatomic) MMEasterEggNewYearActivityPageInfo *bottomLinkPageInfo;
@property (nonatomic) unsigned long long materialId;
@property (retain, nonatomic) NSString *moneyAmount;
@property (nonatomic) unsigned long long creativeType;
@property (retain, nonatomic) NSString *creativeURL;
@property (retain, nonatomic) NSString *thumbURL;
@property (retain, nonatomic) UIImage *defaultCover;

- (id)initWithMaterial:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
