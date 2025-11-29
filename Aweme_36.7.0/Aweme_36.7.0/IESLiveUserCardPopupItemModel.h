@class UIColor, GPBDoubleArray, IESLiveDressResourceWebP, NSString, UIView;

@interface IESLiveUserCardPopupItemModel : NSObject

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundFrame;
@property (nonatomic) BOOL landscape;
@property (nonatomic) double openInterval;
@property (retain, nonatomic) GPBDoubleArray *openRateCurveArray;
@property (nonatomic) double closeInterval;
@property (retain, nonatomic) GPBDoubleArray *closeRateCurveArray;
@property (retain, nonatomic) IESLiveDressResourceWebP *closeCardWebp;
@property (copy, nonatomic) id /* block */ usercardCloseBlock;
@property (retain, nonatomic) NSString *uid;
@property (copy, nonatomic) id /* block */ onShowCompletion;
@property (copy, nonatomic) id /* block */ onHideCompletion;
@property (nonatomic) BOOL fullScreenOnLandscape;
@property (nonatomic) double landscapeWidth;

- (void).cxx_destruct;

@end
