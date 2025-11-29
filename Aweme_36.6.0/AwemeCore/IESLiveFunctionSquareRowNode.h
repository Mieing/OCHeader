@class NSString, NSArray, RightButton, IESLiveAnchorInteractiveGameItem, NSNumber, NSMutableArray;

@interface IESLiveFunctionSquareRowNode : NSObject

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL isBind;
@property (retain, nonatomic) NSNumber *mpOrder;
@property (copy, nonatomic) NSString *descStr;
@property (nonatomic) BOOL isSelecting;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) BOOL showDescButton;
@property (nonatomic) BOOL isDuringLive;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (retain, nonatomic) RightButton *rightButton;
@property (copy, nonatomic) NSString *iconLabel;
@property (nonatomic) BOOL forceHideIconLabel;
@property (copy, nonatomic) NSArray *selectKeys;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameItem *anchorInteractiveGameItem;
@property (copy, nonatomic) NSString *titleLabel;
@property (retain, nonatomic) NSMutableArray *highlightLabelArray;
@property (retain, nonatomic) NSMutableArray *highlightDescArray;
@property (retain, nonatomic) NSString *highlightIcon;

- (id)initWithAnchorInteractiveGameItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
