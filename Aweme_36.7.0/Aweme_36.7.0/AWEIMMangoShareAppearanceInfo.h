@class NSNumber, NSString;

@interface AWEIMMangoShareAppearanceInfo : NSObject

@property (nonatomic) double panelHeight;
@property (retain, nonatomic) NSNumber *preferThemeStyle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *createGroupTitle;
@property (copy, nonatomic) NSString *customSearchPlaceHolder;
@property (nonatomic) BOOL createGroupIfNotExists;
@property (copy, nonatomic) NSString *createGroupDescriptionTitle;
@property (copy, nonatomic) NSString *createGroupDescriptionSubtitle;
@property (nonatomic) BOOL canShowStreak;

- (void).cxx_destruct;
- (id)description;
- (id)initWithParams:(id)a0;

@end
