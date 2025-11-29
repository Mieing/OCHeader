@class NSString, NSArray, UIImage, NSMutableDictionary;

@interface IESLivePSFloatSheetItem : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *ExpendText;
@property (nonatomic) unsigned long long itemId;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSArray *outsideNameArray;
@property (copy, nonatomic) NSArray *insideNameArray;
@property (nonatomic) BOOL showOutside;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIImage *highlightIcon;
@property (nonatomic) BOOL isHighlight;
@property (retain, nonatomic) UIImage *ExpendIcon;
@property (nonatomic) long long delayDismissPanelDuration;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (retain, nonatomic) NSMutableDictionary *showTrackParams;
@property (copy, nonatomic) NSString *accessibilityText;
@property (copy, nonatomic) id /* block */ canShowBlock;
@property (copy, nonatomic) id /* block */ willShowBlock;
@property (copy, nonatomic) id /* block */ clickAction;

- (void).cxx_destruct;
- (id)init;

@end
