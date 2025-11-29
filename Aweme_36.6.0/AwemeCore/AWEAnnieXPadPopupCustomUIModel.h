@class NSString;

@interface AWEAnnieXPadPopupCustomUIModel : NSObject <AnnieXPadPopupCustomUILayoutProtocol, AnnieXPadPopupCustomRadiusProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dragHeightFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;


@end
