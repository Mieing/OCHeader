@class IESLiveCommentEntryStore, NSMutableSet, UIView, NSMutableArray, NSLayoutConstraint;
@protocol IESLiveCommentEntryViewProtocol, IESLiveMonitor;

@interface IESLiveCommentEntryContainer : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIView<IESLiveCommentEntryViewProtocol> *currentCommentEntry;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) NSMutableArray *entrysSwitchedList;
@property (retain, nonatomic) NSMutableSet *entrySwitchedSet;
@property (retain, nonatomic) NSLayoutConstraint *entryWidthConstraint;
@property (weak, nonatomic) IESLiveCommentEntryStore *store;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)monitorCommentEntrySwitchFrom:(id)a0 toType:(id)a1 beginTime:(double)a2;
- (void)monitorCommentEntrySwitchErrorState;
- (void)switchCommentEntry:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
