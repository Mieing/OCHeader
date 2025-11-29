@class FeedItem, NSString, IESLiveInnerFeedUserFeedbackDataProviderInjection, NSMutableArray, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedUserFeedbackController : NSObject <IESLiveInnerUserFeedbackService, IESLiveInnerFeedUserFeedbackDataProviderInjectionDelegate>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) NSMutableArray *roomCorrelationFeedbackCellModels;
@property (retain, nonatomic) FeedItem *outterFeedbackCard;
@property (retain, nonatomic) IESLiveInnerFeedUserFeedbackDataProviderInjection *feedbackDataInjection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)isHaveFeedbackCardWithRoomID:(id)a0;
- (void)deleteUserFeedbackCardWithCellModel:(id)a0;
- (void)removeUserFeedbackCardToTemporaryStorageWithCellModel:(id)a0;
- (BOOL)isHitTimeIntervalCheck;
- (void)insertUserFeedbackCardWithCellModel:(id)a0;
- (long long)findRoomIndexWithRoomID:(id)a0;
- (id)findRoomIDWithRoomIndex:(long long)a0;
- (void)resetEntranceFeedback:(BOOL)a0 withCell:(id)a1;
- (void)buildOutterFeedbackCardIfNeed:(id)a0;
- (void)feedbackDataProviderInjection:(id)a0 didFilterFeedbackItems:(id)a1;
- (BOOL)p_isSupportModify;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
