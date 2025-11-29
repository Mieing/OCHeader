@class IESECGoodsDetailHeaderTabComponentData, IESECUIImageView, NSMutableDictionary, NSString, UILabel, NSMutableArray, UIView;
@protocol IESECGoodsDetailHeaderTabViewDelegate;

@interface IESECGoodsDetailHeaderTabView : UIView <IESECGoodsDetailHeaderTabViewProtocol>

@property (retain, nonatomic) UIView *slideView;
@property (retain, nonatomic) NSMutableArray *tabLabels;
@property (retain, nonatomic) UILabel *tabWhenFold;
@property (nonatomic) unsigned long long nowTabIndex;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) IESECGoodsDetailHeaderTabComponentData *data;
@property (nonatomic) long long totalIndex;
@property (nonatomic) BOOL isSmallMode;
@property (retain, nonatomic) IESECUIImageView *moreImageView;
@property (retain, nonatomic) NSMutableDictionary *foldStateDict;
@property (nonatomic) unsigned long long nowIndex;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderTabViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFoldStateWithIndex:(unsigned long long)a0 foldState:(BOOL)a1;
- (void)updateFoldState;
- (id)initWithTabs:(id)a0 initIndex:(unsigned long long)a1;
- (unsigned long long)indexToTabIndex:(unsigned long long)a0;
- (unsigned long long)indexToTabPageIndex:(unsigned long long)a0;
- (id)tabString:(unsigned long long)a0;
- (void)tapPageTab:(id)a0;
- (void)foldTabs;
- (void)cancelFold;
- (id)tabLabel:(unsigned long long)a0;
- (void)slideViewAnimate:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
