@class NSString, NSDictionary, NSMutableDictionary, NSAttributedString;
@protocol IESIMConversationProtocol;

@interface AWEIMFansGroupNoticeTipMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMYYLabelHighlightAccessibilityProtocol>

@property (retain, nonatomic) NSDictionary *contentAttributes;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSDictionary *contentDic;
@property (copy, nonatomic) NSString *cid;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) NSMutableDictionary *highlightTapActionMap;
@property (readonly, copy, nonatomic) NSString *hintString;
@property (retain, nonatomic) NSAttributedString *contentAttributedString;
@property (copy, nonatomic) id /* block */ noticeTipClickBlock;
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
- (id)getDefaultContentAttributeString;
- (BOOL)enableFansGroupMuteSettings;
- (id)getOpenContentAttributeString;
- (void)__recordHighlightWith:(id)a0 tapAction:(id /* block */)a1;
- (id)contentHighlightActionMap;
- (void).cxx_destruct;
- (long long)templateType;
- (struct CGSize { double x0; double x1; })messageSize;
- (double)fontSize;
- (id)style;
- (BOOL)isMute;

@end
