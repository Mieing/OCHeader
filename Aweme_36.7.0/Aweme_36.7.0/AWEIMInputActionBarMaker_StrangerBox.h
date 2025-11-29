@class NSArray, NSString, UIView;
@protocol AWEIMInputActionBarProtocol, AWEIMInputActionBarMakerDataSource;

@interface AWEIMInputActionBarMaker_StrangerBox : NSObject <AWEIMInputActionBarMakable>

@property (retain, nonatomic) UIView<AWEIMInputActionBarProtocol> *actionBar;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *calculatedItems;
@property (readonly, copy, nonatomic) NSString *typeString;
@property (retain, nonatomic) UIView *blurContentView;
@property (weak, nonatomic) id<AWEIMInputActionBarMakerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strangerBoxConversationEntryItems:(long long)a0;

- (double)actionBarHeight;
- (id)resolvedConfig;
- (id)makeActionBar;
- (void)setActionBarToNil;
- (id)recalculateEntryItems;
- (BOOL)entryItemContainReplacedSpecialEmoji;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)conversation;

@end
