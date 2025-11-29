@class UIView, CMessageWrap;

@interface MsgImgPreviewData : MMObject

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } nodeViewWindowFrame;
@property (nonatomic) BOOL isNodeViewVisible;
@property (nonatomic) BOOL shouldRotateToPortrait;
@property (nonatomic) BOOL shouldFadeInFadeOut;
@property (weak, nonatomic) UIView *fromView;

- (void).cxx_destruct;

@end
