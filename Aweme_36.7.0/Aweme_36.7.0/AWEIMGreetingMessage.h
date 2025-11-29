@class NSArray, NSString;

@interface AWEIMGreetingMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) NSArray *jokerStickers;
@property (retain, nonatomic) NSArray *greetingStickers;
@property (nonatomic) BOOL hasRemoved;
@property (copy, nonatomic) NSString *fromUserNickName;
@property (readonly, nonatomic) NSArray *stickers;
@property (retain, nonatomic) NSArray *locoalGifFromStorage;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *hintText;
@property (nonatomic) long long msgPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)shouldShowBottomBar;
- (BOOL)supportRefactorCell;
- (id)transStickersByArray:(id)a0;
- (id)initWithIMStorageStickers:(unsigned long long)a0;
- (BOOL)shouldFilterMessageInsert;
- (void)removeMessage;
- (void).cxx_destruct;
- (long long)templateType;

@end
