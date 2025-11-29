@class NSArray, NSString;

@interface AWEIMCollectCardMessage : AWEIMMessage <AWEIMCollectCardMessageUpdateMessage, AWEIMMessageConfigProtocol, AWEIMMsgRefreshMessageProtocol>

@property (nonatomic) unsigned long long cardStatus;
@property (copy, nonatomic) NSArray *gottenCardUserIDs;
@property (readonly, nonatomic) unsigned long long msgStatus;
@property (readonly, copy, nonatomic) NSString *backgroundUrl;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *trackInfo;
@property (copy, nonatomic) id /* block */ statusUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displayTextWithMessage:(id)a0 displayType:(long long)a1;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (void)updateCollectCardMsg:(id)a0 status:(unsigned long long)a1 schema:(id)a2 completion:(id /* block */)a3;
- (id)computedSubtitle;
- (BOOL)shouldShowDarkView;
- (id)displayTextWithDisplayType:(long long)a0;
- (id)__msgStatusKey;
- (id)__msgSchemaKey;
- (id)__updateMsgStatus:(unsigned long long)a0;
- (id)__updateSchema:(id)a0;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })containerSize;
- (unsigned long long)cardStyle;

@end
