@class UIColor, NSString, UIFont, UILabel;

@interface CAKAIMemoriesPopoverLabel : UIView <DUXPopoverContent>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
