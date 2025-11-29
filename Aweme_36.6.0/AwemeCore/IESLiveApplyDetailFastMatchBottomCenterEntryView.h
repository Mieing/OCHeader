@class UILabel, NSString, UIView;

@interface IESLiveApplyDetailFastMatchBottomCenterEntryView : UIView <IESLiveApplyDetailFastMatchEntryView>

@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UILabel *defaultLabel;
@property (retain, nonatomic) UIView *defaultIndicator;
@property (retain, nonatomic) UILabel *matchingLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_tap;
- (void)markMatching:(BOOL)a0;
- (void)markEmphasized:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithAction:(id /* block */)a0;

@end
