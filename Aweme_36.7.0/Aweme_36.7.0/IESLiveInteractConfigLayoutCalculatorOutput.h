@class NSArray, NSString;

@interface IESLiveInteractConfigLayoutCalculatorOutput : NSObject <IESLiveInteractConfigLayoutCalculatorOutputProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } guestListFrame;
@property (copy, nonatomic) NSArray *guestFrames;
@property (copy, nonatomic) NSArray *separatorInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anchorFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anchorContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hostStreamLayout;
@property (copy, nonatomic) NSArray *guestStreamLayouts;
@property (copy, nonatomic) NSArray *allStreamLayouts;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentStreamLayout;
@property (copy, nonatomic) NSArray *guestLayoutConfigs;
@property (copy, nonatomic) NSArray *separatorLayoutConfigs;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } placeholderRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
