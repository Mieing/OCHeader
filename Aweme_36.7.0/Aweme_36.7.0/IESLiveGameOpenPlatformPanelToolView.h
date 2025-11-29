@class NSArray, NSMutableArray, NSString;

@interface IESLiveGameOpenPlatformPanelToolView : UIView <IESLiveGameOpenPlatformPanelToolViewActions>

@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) NSMutableArray *separatorViews;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) struct CGColor { } *borderColorRef;
@property (readonly, copy, nonatomic) NSArray *views;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)removeCurrentSubviews;
- (void)hideToolView;
- (void)showToolView;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)reloadWithItems:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupSubviews;

@end
