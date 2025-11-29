@class NSString;

@interface AWEIMVoipMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (nonatomic) unsigned long long voipStatus;
@property (copy, nonatomic) NSString *voipContent;
@property (nonatomic) long long cameraOff;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (readonly, nonatomic) unsigned long long cellStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentAttributes;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)calculateAttributedContent;
- (BOOL)supportRefactorCell;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)voipIcon:(BOOL)a0;
- (id)voipDisplayText;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
