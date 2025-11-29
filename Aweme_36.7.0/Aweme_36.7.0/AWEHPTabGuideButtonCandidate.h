@class AWEHPTabGuidePitayaButtonTriggerModel, NSString, AWECommonButtonInfoModel;
@protocol AWEPzComponentProtocol;

@interface AWEHPTabGuideButtonCandidate : NSObject <AWEHPTabGuideCandidateProtocol>

@property (nonatomic) double btnCtr;
@property (retain, nonatomic) AWECommonButtonInfoModel *model;
@property (nonatomic) long long playPctEvent;
@property (retain, nonatomic) AWEHPTabGuidePitayaButtonTriggerModel *triggerModel;
@property (nonatomic) long long state;
@property (retain, nonatomic) id<AWEPzComponentProtocol> component;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) BOOL binding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
