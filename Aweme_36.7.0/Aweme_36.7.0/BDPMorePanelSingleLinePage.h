@class NSArray, NSString, NSLayoutConstraint, NSMutableArray;

@interface BDPMorePanelSingleLinePage : UIView <BDPMorePanelPage> {
    NSLayoutConstraint *_itemTopConstraint;
}

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSMutableArray *renderCells;
@property (retain, nonatomic) NSMutableArray *cellSpaces;
@property (nonatomic) double itemTopSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)capacity;

- (BOOL)abTestOnForShareItemMenu;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateItems:(id)a0;

@end
