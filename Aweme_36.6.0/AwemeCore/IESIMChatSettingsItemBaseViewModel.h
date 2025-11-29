@class NSString, UIColor;

@interface IESIMChatSettingsItemBaseViewModel : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long style;
@property (nonatomic) long long itemType;
@property (nonatomic) BOOL disableHighlighted;
@property (copy, nonatomic) id /* block */ onClicked;
@property (copy, nonatomic) id /* block */ willDisplay;
@property (nonatomic) long long internalPosition;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;

- (BOOL)enableAccessibilityOpt;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithType:(long long)a0;

@end
