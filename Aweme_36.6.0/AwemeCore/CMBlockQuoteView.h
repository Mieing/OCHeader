@class NSString, CMYYTextAttributes, UIView, NSAttributedString, YYLabel;

@interface CMBlockQuoteView : UIView <CMMarkdownSubViewTextCopiable>

@property (retain, nonatomic) NSAttributedString *attriStr;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) CMYYTextAttributes *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPureStr;
- (id)copyMarkdownStr;
- (id)initWithAttributedString:(id)a0 attributes:(id)a1;
- (void)config;
- (void).cxx_destruct;

@end
