@class NSArray;

@interface AWESearchEntryHalfScreenElement : AWESearchEntryElement

@property (copy, nonatomic) NSArray *checkInDetailArray;
@property (copy, nonatomic) NSArray *homepageFeedAvoidList;
@property (copy, nonatomic) NSArray *detailVCList;

- (BOOL)enableBigMode;
- (BOOL)shouldShowSearchEntry;
- (void)willAnimation;
- (void)didAnimation;
- (id)customSchemaParams;
- (id)customSearchEnterFrom;
- (id)customExtraLogParams;
- (BOOL)isInDetailVC;
- (void).cxx_destruct;
- (id)init;
- (void)updateUI;

@end
