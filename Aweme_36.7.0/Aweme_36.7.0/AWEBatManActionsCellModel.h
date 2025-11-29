@class NSString;

@interface AWEBatManActionsCellModel : NSObject

@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *highlightedTitle;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *iconImageNameHighlighted;
@property (copy, nonatomic) id /* block */ cellTappedBlock;
@property (nonatomic) long long defaultQualityIndex;
@property (copy, nonatomic) id /* block */ selectQualityAction;
@property (copy, nonatomic) id /* block */ changeFavoriteAction;
@property (nonatomic) BOOL isHighlightedStyle;

- (id)initWithType:(long long)a0 title:(id)a1 normalIcon:(id)a2 highlightedIcon:(id)a3;
- (id)initWithType:(long long)a0 title:(id)a1 icon:(id)a2;
- (void).cxx_destruct;

@end
