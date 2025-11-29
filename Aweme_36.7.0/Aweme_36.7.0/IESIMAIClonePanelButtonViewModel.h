@class UIColor, NSString;

@interface IESIMAIClonePanelButtonViewModel : NSObject

@property (retain, nonatomic) UIColor *buttonBGColor;
@property (retain, nonatomic) UIColor *buttonTitleColor;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) id /* block */ buttonConfigBlock;
@property (copy, nonatomic) id /* block */ buttonDidShowBlock;

- (void).cxx_destruct;
- (void)dealloc;

@end
