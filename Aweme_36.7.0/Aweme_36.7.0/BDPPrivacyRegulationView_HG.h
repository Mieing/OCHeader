@class NSString;
@protocol BDPPrivacyRegulationViewDelegate_HG;

@interface BDPPrivacyRegulationView_HG : UIView <BDPPrivacyRegulationContentViewDelegate_HG>

@property (copy, nonatomic) NSString *content;
@property (weak, nonatomic) id<BDPPrivacyRegulationViewDelegate_HG> delegate;
@property (copy, nonatomic) id /* block */ AnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickReport:(id)a0;
- (void)onClickPrivacyProtocol:(id)a0;
- (id)initWithContent:(id)a0 delegete:(id)a1;
- (void)onClickButton:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
