@class NSString, UIFont, UIColor;

@interface AWEIMFoldMessageRiskTipsModel : NSObject <AWEIMMessageRiskModelProtocol>

@property (copy, nonatomic) NSString *riskInfoText;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double marginLeft;
@property (nonatomic) long long order;
@property (copy, nonatomic) id /* block */ tapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeOfRiskInfoText;
- (void).cxx_destruct;

@end
