@class IESLiveGiftAssemblyCustomizeEntranceModel, IESLiveRichTextLabel, NSString, UIView;
@protocol IESLiveGiftAssemblyCustomizeEntranceViewDelegate;

@interface IESLiveGiftAssemblyCustomizeEntranceView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESLiveGiftAssemblyCustomizeEntranceModel *model;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) IESLiveRichTextLabel *entranceLabel;
@property (weak, nonatomic) id<IESLiveGiftAssemblyCustomizeEntranceViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ entranceSizeDidUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateEntranceWithModel:(id)a0;
- (void)p_didTapEntranceButton;
- (void)p_didShowEntranceButton;
- (void)h_clearGiftAssemblyCache;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end
