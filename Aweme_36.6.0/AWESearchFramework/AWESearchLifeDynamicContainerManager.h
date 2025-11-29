@class NSString, AWESearchGroupBuyDynamicContainerView, NSMutableArray, AWESearchAIGCSummaryEntryView;

@interface AWESearchLifeDynamicContainerManager : NSObject

@property (retain, nonatomic) AWESearchGroupBuyDynamicContainerView *bottomDynamicContainer;
@property (retain, nonatomic) NSString *displayingBottomCardTypeName;
@property (retain, nonatomic) NSMutableArray *didClosedOnceCardTypeName;
@property (weak, nonatomic) AWESearchAIGCSummaryEntryView *aigcEntry;

+ (void)setSafeBottomInsetForAigcEntry:(id)a0;
+ (void)showBottomDynamicContainerWithModel:(id)a0 superView:(id)a1;
+ (void)clearBottomDynamicContainer;
+ (id)sharedInstance;

- (void)closeGroupBuyDynamicContainer:(id)a0;
- (void).cxx_destruct;

@end
