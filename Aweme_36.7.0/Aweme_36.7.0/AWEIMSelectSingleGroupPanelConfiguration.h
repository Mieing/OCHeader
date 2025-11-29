@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWEIMSelectSingleGroupPanelConfiguration : NSObject

@property (copy, nonatomic) NSString *conId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldShowSelectAllButton;
@property (nonatomic) BOOL isMultiSelect;
@property (retain, nonatomic) NSNumber *minSelectCount;
@property (retain, nonatomic) NSNumber *maxSelectCount;
@property (copy, nonatomic) NSString *maximumSelectToast;
@property (copy, nonatomic) NSString *unselectReason;
@property (nonatomic) BOOL doNotHideMyself;
@property (nonatomic) BOOL isDisplayMyselfSuffix;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSArray *filterUserList;
@property (retain, nonatomic) NSArray *defaultSelectUserList;
@property (retain, nonatomic) NSArray *stickOntopUidList;
@property (copy, nonatomic) id /* block */ dataBlock;

- (void).cxx_destruct;

@end
