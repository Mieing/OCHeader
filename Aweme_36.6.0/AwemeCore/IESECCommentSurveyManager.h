@class IESECCommentSurveyPostModel, NSString, NSDictionary, BDXBridgeEventSubscriber, NSData, UIView;
@protocol AnnieXContainerBaseProtocol, IESHYContainerProtocol, IESECCommentSurveyManagerDelegate;

@interface IESECCommentSurveyManager : NSObject <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) NSString *currentLynxUrl;
@property (retain, nonatomic) NSData *lynxTemplate;
@property (copy, nonatomic) NSString *surveyLynxUrl;
@property (copy, nonatomic) NSString *surveyJsonStr;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long surveyId;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) IESECCommentSurveyPostModel *postModel;
@property (nonatomic) BOOL showSubOptions;
@property (nonatomic) BOOL editingContent;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) struct CGSize { double width; double height; } updatedSize;
@property (copy, nonatomic) NSDictionary *frequencyData;
@property (retain, nonatomic) UIView<IESHYContainerProtocol, AnnieXContainerBaseProtocol> *hybridContainer;
@property (weak, nonatomic) id<IESECCommentSurveyManagerDelegate> delegate;
@property (nonatomic) long long insertIndex;
@property (copy, nonatomic) NSDictionary *surveyStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didShowWithSurveyScene:(unsigned long long)a0;
+ (BOOL)shouldShowNPSWithSurveyScene:(unsigned long long)a0;
+ (void)addObserver:(id)a0 exit:(id /* block */)a1;
+ (void)didCloseWithSurveyScene:(unsigned long long)a0;
+ (void)didSubmitWithSurveyScene:(unsigned long long)a0;
+ (id)passiveTimeStoreKey:(unsigned long long)a0;
+ (id)activeTimeStoreKey:(unsigned long long)a0;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)registerEvent;
- (void)removeEvent;
- (void)initServiceWithModel:(id)a0 scene:(unsigned long long)a1 productId:(id)a2;
- (void)forceSubmitSurvey;
- (id)loadSurveyView;
- (BOOL)surveyShouldShowWithScene:(unsigned long long)a0;
- (id)toStringWithScene:(unsigned long long)a0;
- (void)updateSurveyFrequency:(unsigned long long)a0 scene:(unsigned long long)a1;
- (void)updatePostModelWithParams:(id)a0;
- (void)submitSurvey;
- (void)cleanPostModel;
- (void)closeSurvey;
- (void)forceFocusIfNeeded;
- (void)submitSurveyResultWithModel:(id)a0;
- (void)storeFrequencyData;
- (id)surveyFrequencyKeyWithScene:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })getDefaultSizeWithScene:(unsigned long long)a0;
- (void)updateStatusWithParams:(id)a0;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)init;
- (void)dealloc;
- (long long)daysBetweenDate:(id)a0 andDate:(id)a1;

@end
