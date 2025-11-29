@class NSArray, AWEIMMessageShowAnimationModel, NSString;

@interface AWEIMWordAnimationView : UIView <IESIMWordAnimationViewProtocol>

@property (copy, nonatomic) AWEIMMessageShowAnimationModel *model;
@property (retain, nonatomic) NSArray *animationGroups;
@property (retain, nonatomic) NSArray *animationViews;
@property (copy, nonatomic) NSString *animateID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)p_prepareElements;
- (void).cxx_destruct;
- (void)play;
- (void)remove;

@end
