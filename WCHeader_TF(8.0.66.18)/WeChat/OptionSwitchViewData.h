@class TextViewData, SwitchViewData;

@interface OptionSwitchViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) TextViewData *desc;
@property (retain, nonatomic) SwitchViewData *switchItem;
@property (nonatomic) BOOL hideTopSeparator;
@property (nonatomic) BOOL hideBottomSeparator;

+ (void)initialize;

@end
