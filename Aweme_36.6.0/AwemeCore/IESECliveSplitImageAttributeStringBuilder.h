@class UIColor, UIFont, NSString, UIImage, UIView, NSAttributedString;

@interface IESECliveSplitImageAttributeStringBuilder : NSObject <IESECLiveAttributeStringBuilder>

@property (nonatomic) double limitWidth;
@property (copy, nonatomic) NSAttributedString *fullAttributeText;
@property (copy, nonatomic) NSAttributedString *prefix;
@property (copy, nonatomic) NSAttributedString *content;
@property (retain, nonatomic) UIFont *contentFont;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIImage *splitImage;
@property (weak, nonatomic) UIView *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTextContent:(id)a0;
- (void).cxx_destruct;
- (id)build;

@end
