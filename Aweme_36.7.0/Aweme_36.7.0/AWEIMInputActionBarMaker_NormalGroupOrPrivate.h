@class NSArray, NSString, UIView;
@protocol AWEIMInputActionBarProtocol, AWEIMInputActionBarMakerDataSource;

@interface AWEIMInputActionBarMaker_NormalGroupOrPrivate : NSObject <AWEIMInputActionBarMakable>

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

- (BOOL)iPadAdapterEnabled;
- (double)actionBarHeight;
- (id)resolvedConfig;
- (id)makeActionBar;
- (void)setActionBarToNil;
- (id)recalculateEntryItems;
- (BOOL)entryItemContainReplacedSpecialEmoji;
- (id)p_insertLightInteractionItemIfNeededInItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)uiStyle;
- (id)conversation;

@end
