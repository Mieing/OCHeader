@class NSString, BDPUniqueID, NSDictionary;
@protocol BDPPrivacyRegulationViewDelegate;

@interface BDPPrivacyRegulationView : UIView <BDPPrivacyRegulationContentViewDelegate>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (weak, nonatomic) id<BDPPrivacyRegulationViewDelegate> delegate;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL shouldUseUnionPrivacy;
@property (retain, nonatomic) NSDictionary *unionPrivacyParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickReport:(id)a0;
- (void)onClickPrivacyProtocol:(id)a0;
- (void)onClickButton:(id)a0;
- (id)initWithUniqueID:(id)a0 content:(id)a1 shouldUseUnionPrivacy:(BOOL)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithContent:(id)a0;

@end
