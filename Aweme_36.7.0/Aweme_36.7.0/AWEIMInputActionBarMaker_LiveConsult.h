@class NSString, NSArray, AWEIMInputFAQListViewModel, UIView;
@protocol AWEIMInputActionBarProtocol, AWEIMInputActionBarMakerDataSource;

@interface AWEIMInputActionBarMaker_LiveConsult : NSObject <AWEIMInputActionBarMakable>

@property (retain, nonatomic) UIView<AWEIMInputActionBarProtocol> *actionBar;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) AWEIMInputFAQListViewModel *faqListViewModel;
@property (readonly, copy, nonatomic) NSString *typeString;
@property (retain, nonatomic) UIView *blurContentView;
@property (weak, nonatomic) id<AWEIMInputActionBarMakerDataSource> dataSource;
@property (readonly, nonatomic) NSArray *calculatedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)actionBarHeight;
- (id)makeActionBar;
- (void)setActionBarToNil;
- (id)recalculateEntryItems;
- (BOOL)entryItemContainReplacedSpecialEmoji;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
