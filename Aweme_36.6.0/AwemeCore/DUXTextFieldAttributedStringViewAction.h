@class NSString, UILabel, NSAttributedString, UIView;

@interface DUXTextFieldAttributedStringViewAction : NSObject <DUXTextFieldContent>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) id /* block */ didClickAction;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) double maxScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithAttributedString:(id)a0 clickAction:(id /* block */)a1;
+ (id)actionWithAttributedString:(id)a0;

- (id)duxTextField_view;
- (void)didClickContentView;
- (void).cxx_destruct;

@end
