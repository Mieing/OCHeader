@interface GameMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) unsigned int gameType;
@property (readonly, nonatomic) unsigned int realGameIndex;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (id)additionalAccessibilityDescription;

@end
