@class NSDictionary, IESLiveGuidePromptView, NSString;

@interface IESLiveGuidePromptFragment : IESLiveGuideComponent <IESLiveGuidePromptRouter, IESLiveGuideFansInfoPromptRouter>

@property (retain, nonatomic) IESLiveGuidePromptView *promptView;
@property (nonatomic) double promptBottom;
@property (nonatomic) unsigned long long currentType;
@property (copy, nonatomic) id /* block */ guideSettingPromptHideAction;
@property (nonatomic) BOOL fansInfoPromptShowed;
@property (retain, nonatomic) NSDictionary *fansInfoPromptTrackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (id)getFansInfoPromptShowData;
- (BOOL)v2showPrompt:(id)a0 type:(unsigned long long)a1 atView:(id)a2 position:(unsigned long long)a3 centerOffset:(double)a4 arrowCenterOffset:(double)a5 animation:(BOOL)a6 dissmissTime:(long long)a7 dissmissCompletion:(id /* block */)a8;
- (BOOL)hidePrompt:(BOOL)a0 type:(unsigned long long)a1;
- (void)hidePrompt:(BOOL)a0;
- (double)stringWidth:(id)a0;
- (BOOL)enableTopic;
- (void)trackerFansInfoBlockedByTpye:(unsigned long long)a0;
- (void)replaceCurrentPromptWithType:(unsigned long long)a0;
- (id)v2ConfigPromptRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atView:(id)a1 position:(unsigned long long)a2 centerOffset:(struct CGSize { double x0; double x1; })a3 arrowCenterOffset:(double)a4;
- (void)dismissPromptAfter:(long long)a0 animation:(BOOL)a1 completion:(id /* block */)a2;
- (id)basicTrackerParam;
- (void)trackerFansInfoNotShow:(unsigned long long)a0;
- (void)guideLivePartnerWillHide;
- (BOOL)v2showPromptText:(id)a0 type:(unsigned long long)a1 atView:(id)a2 position:(unsigned long long)a3 centerOffset:(struct CGSize { double x0; double x1; })a4 arrowCenterOffset:(double)a5;
- (BOOL)v2showPromptView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 type:(unsigned long long)a2 atView:(id)a3 position:(unsigned long long)a4 centerOffset:(struct CGSize { double x0; double x1; })a5 arrowCenterOffset:(double)a6;
- (void)trackerFansInfoPromptDidShow;
- (void).cxx_destruct;

@end
