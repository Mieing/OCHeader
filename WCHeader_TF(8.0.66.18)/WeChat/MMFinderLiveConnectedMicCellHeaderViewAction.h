@class UIImage, NSString;

@interface MMFinderLiveConnectedMicCellHeaderViewAction : NSObject

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *highlightedIconImage;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) id /* block */ action;

+ (id)actionWithIcon:(id)a0 highlightedIcon:(id)a1 accessibilityLabel:(id)a2 actionBlock:(id /* block */)a3;

- (void).cxx_destruct;

@end
