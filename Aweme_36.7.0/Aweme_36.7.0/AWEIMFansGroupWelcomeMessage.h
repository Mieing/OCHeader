@class NSDictionary, NSAttributedString, NSString;

@interface AWEIMFansGroupWelcomeMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (copy, nonatomic) NSDictionary *contentAttributes;
@property (copy, nonatomic) NSDictionary *contentDict;
@property (copy, nonatomic) NSAttributedString *contentAttributedString;
@property (copy, nonatomic) id /* block */ welcomeSetClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributedContent;
- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)pluginsComponentsName;
- (void).cxx_destruct;
- (long long)templateType;
- (struct CGSize { double x0; double x1; })messageSize;
- (double)fontSize;
- (id)style;

@end
