@class NSNumber, UIFont;

@interface DYUserProtocolViewUIConfig : NSObject

@property (nonatomic) BOOL shouldSingleProtocolInMiddle;
@property (retain, nonatomic) NSNumber *superViewWidth;
@property (nonatomic) unsigned long long checkBoxStyle;
@property (retain, nonatomic) UIFont *customFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;

- (void).cxx_destruct;
- (id)init;

@end
