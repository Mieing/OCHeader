@class UILabel, NSString;
@protocol ACCRecordHintService, ACCRecorderViewContainer;

@interface ACCRecordHintComponent : ACCFeatureComponent <ACCRecordHintDelegate>

@property (retain, nonatomic) UILabel *hintLabel;
@property (copy, nonatomic) id /* block */ dismissHintBlock;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordHintService> hintService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)createHintLabel;
- (void)hintServiceShowHint:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (id)containerViewController;

@end
