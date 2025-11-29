@class NSNumber, NSArray;

@interface IESIMContactPickerSelectConfig : NSObject

@property (readonly, nonatomic) long long selectStyle;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (copy, nonatomic) id /* block */ clickSelectBlock;
@property (copy, nonatomic) id /* block */ onSelectChangeBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (nonatomic) BOOL showToastSelectReachMax;
@property (nonatomic) BOOL disableAutoExitSearch;
@property (retain, nonatomic) NSNumber *minimumSelectCount;
@property (retain, nonatomic) NSNumber *maximumSelectCount;
@property (copy, nonatomic) NSArray *notSelectableUserArray;
@property (copy, nonatomic) NSArray *defaultSelectUserList;
@property (copy, nonatomic) NSArray *defaultSelectAndDisableDeselectList;
@property (copy, nonatomic) id /* block */ maximumSelectBlock;
@property (nonatomic) BOOL disableCellDefaultSelectAction;

+ (id)multiSelectWithMinSelectCount:(id)a0 maxSelectCount:(id)a1 confirmBlock:(id /* block */)a2;
+ (id)singleSelectWithDidSelectBlock:(id /* block */)a0;

- (id)initWithDidSelectBlock:(id /* block */)a0;
- (id)initWithMinSelectCount:(id)a0 maxSelectCount:(id)a1 confirmBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
