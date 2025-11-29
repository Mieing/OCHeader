@class NSArray, NSString, UIImage;

@interface AWEPrivacySettingActionSheetConfig : NSObject

@property (copy, nonatomic) NSArray *models;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *headerTitleText;
@property (nonatomic) BOOL needHighLight;
@property (nonatomic) BOOL useCardUIStyle;
@property (nonatomic) BOOL fromHalfScreen;
@property (retain, nonatomic) UIImage *headerLabelIcon;
@property (nonatomic) double sheetWidth;
@property (nonatomic) BOOL adaptIpadFromHalfVC;

- (void).cxx_destruct;

@end
