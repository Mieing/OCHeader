@class NSString, NSAttributedString, AWEURLModel;

@interface AWEIMThirdPartLinkMessage : AWEIMMessage <AWEIMMessageConfigProtocol> {
    NSAttributedString *_attributedContent;
}

@property (nonatomic) long long subType;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *sourceTitle;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *clientKey;
@property (retain, nonatomic) AWEURLModel *sourceIcon;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *attributedSourceTitle;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableRefactor;

- (id)attributedContent;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)calculateAttributedContent;
- (void)setAttributedContent:(id)a0;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedForward;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
