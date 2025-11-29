@class NSArray, NSString, AWEAwemeModel, UILabel, DUXBaseImageView, UIView;
@protocol AWELandscapeChapterEntranceDelegate;

@interface AWELongVideoLandscapeHighLightEntranceView : UIView <AWELandscapeChapterEntranceViewProtocol>

@property (retain, nonatomic) UIView *pointView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) DUXBaseImageView *arrowIcon;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isLock;
@property (readonly, copy, nonatomic) NSArray *highLightList;
@property (weak, nonatomic) id<AWELandscapeChapterEntranceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithCurrentTime:(double)a0;
- (void)updateLockStatus:(BOOL)a0;
- (void)trackShowChapterEntranceWithState:(long long)a0 context:(id)a1;
- (void)trackShowChapterEntranceOverWithContext:(id)a0;
- (void)trackClickChapterEntranceWithState:(long long)a0 context:(id)a1 isClickNext:(BOOL)a2 extraParams:(id)a3;
- (void)handleClickChapterEntrance:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
