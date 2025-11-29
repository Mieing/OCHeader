@class NSString;

@interface AWEFormatVoiceChatCardMessage : AWEIMMessage <AWEFormatVoiceChatCardMessageProtocol>

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *jumpScheme;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (void).cxx_destruct;
- (long long)templateType;

@end
