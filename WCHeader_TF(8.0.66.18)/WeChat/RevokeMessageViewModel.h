@class RevokeWrap, NSMutableArray;

@interface RevokeMessageViewModel : BaseMessageViewModel

@property (nonatomic) struct CGSize { double width; double height; } expandButtonSize;
@property (nonatomic) BOOL hasExpandBtn;
@property (nonatomic) BOOL isFolding;
@property (nonatomic) struct CGSize { double width; double height; } revokeItemSize;
@property (retain, nonatomic) NSMutableArray *revokeStyle;
@property (readonly, nonatomic) double textFontSize;
@property (readonly, nonatomic) unsigned long long parserType;
@property (readonly, nonatomic) RevokeWrap *revokeWrap;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (BOOL)canCreateMessageViewModelWhilePreload;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (BOOL)isTailPart;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)setRead;
- (void).cxx_destruct;

@end
