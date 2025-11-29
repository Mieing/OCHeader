@class NSString, IESECTrackContext;

@interface IESECTracker : NSObject <IESECTrackerChain>

@property (retain, nonatomic) IESECTrackContext *context;
@property (nonatomic) double adDurationStart;
@property (retain, nonatomic) IESECTrackContext *context;
@property (copy, nonatomic) id /* block */ eventCallback;
@property (readonly, copy, nonatomic) id /* block */ eventName;
@property (readonly, copy, nonatomic) id /* block */ once;
@property (readonly, copy, nonatomic) id /* block */ extraParams;
@property (readonly, copy, nonatomic) id /* block */ adLabel;
@property (readonly, copy, nonatomic) id /* block */ adRefer;
@property (readonly, copy, nonatomic) id /* block */ filterList;
@property (readonly, copy, nonatomic) id /* block */ logExtraData;
@property (readonly, copy, nonatomic) id /* block */ withBtmID;
@property (readonly, copy, nonatomic) id /* block */ withBtmParams;
@property (readonly, copy, nonatomic) id /* block */ withBstGroupType;
@property (readonly, copy, nonatomic) id /* block */ generateBtmParamsWithHost;
@property (readonly, copy, nonatomic) id /* block */ generateBtmParamsWithBtmAndHost;
@property (readonly, copy, nonatomic) id /* block */ isBst;
@property (readonly, copy, nonatomic) id /* block */ withView;
@property (readonly, copy, nonatomic) id /* block */ withUniqueKey;
@property (readonly, copy, nonatomic) id /* block */ withRuleKey;
@property (readonly, copy, nonatomic) id /* block */ track;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackEvent:(id)a0 allParams:(id)a1;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)baseTrackParams;
- (void)updateBaseParamsWithExtraParems:(id)a0;
- (void)doTrack;
- (void)updatePageType:(id)a0;
- (id)adContext;
- (void)doAdTrack;
- (void)doNormalTrack;
- (void)doFilterParams;
- (void)updateTrackerParamsWithContext:(id)a0;
- (void)resetAdDuration;
- (void)addTrackEventCallback:(id /* block */)a0;
- (void)removeOneKeyForPrefix:(id)a0;
- (void)trackFeedsAdLabel:(id)a0 refer:(id)a1 duration:(id)a2 recommendItem:(id)a3;
- (void)trackFeedsAdClickURLWithRecommendItem:(id)a0;
- (void)trackFeedsAdLabel:(id)a0 refer:(id)a1 duration:(id)a2 recommendItem:(id)a3 once:(id)a4;
- (void)trackFeedsAdShowURLWithRecommendItem:(id)a0 once:(id)a1;
- (void)removeTrackFeedsAdLabelOnceKey:(id)a0;
- (void)trackFeedsAdShowURLWithRecommendItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)clearData;

@end
