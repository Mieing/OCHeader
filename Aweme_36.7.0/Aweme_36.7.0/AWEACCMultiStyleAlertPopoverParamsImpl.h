@class NSArray, NSString, UIView;

@interface AWEACCMultiStyleAlertPopoverParamsImpl : AWEACCMultiStyleAlertTemplateParamsImpl <ACCMultiStyleAlertPopoverParamsProtocol>

@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double fixedContentWidth;
@property (nonatomic) double fixedContentHeight;
@property (nonatomic) double fixedOffsetY;
@property (nonatomic) long long alignmentMode;
@property (nonatomic, getter=isReconfigBeforeShow) BOOL reconfigBeforeShow;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createAction;

@end
