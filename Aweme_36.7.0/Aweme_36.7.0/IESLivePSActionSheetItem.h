@class NSString, NSArray, NSMutableDictionary, UITableView;

@interface IESLivePSActionSheetItem : IESLiveDynamicModel

@property (nonatomic) unsigned long long itemID;
@property (nonatomic) unsigned long long area;
@property (nonatomic) long long priority;
@property (retain, nonatomic) Class itemViewClass;
@property (copy, nonatomic) NSString *itemStyle;
@property (copy, nonatomic) NSArray *supportMessageClasses;
@property (nonatomic) BOOL stillShowPanelWhenClickItem;
@property (retain, nonatomic) NSMutableDictionary *trackParms;
@property (copy, nonatomic) id /* block */ canShowBlock;
@property (copy, nonatomic) id /* block */ itemWillShowAndUpdateViewBlock;
@property (weak, nonatomic) UITableView *actionSheetTableView;
@property (copy, nonatomic) id /* block */ itemHeightBlock;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void).cxx_destruct;
- (id)init;

@end
