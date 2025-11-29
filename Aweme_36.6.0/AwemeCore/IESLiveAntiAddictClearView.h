@class NSString, UIView;
@protocol AWEFeedAntiAddictClearViewProtocol;

@interface IESLiveAntiAddictClearView : NSObject <IESLiveFeedAntiAddictClearView>

@property (retain, nonatomic) UIView<AWEFeedAntiAddictClearViewProtocol> *clearView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithDelayTime:(double)a0;
- (void)updateWithLiveAntiModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)view;
- (void)setDisplayDelegate:(id)a0;

@end
