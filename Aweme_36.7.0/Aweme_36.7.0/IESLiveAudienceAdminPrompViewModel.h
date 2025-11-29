@class NSArray, IESLiveAudienceAdminPromptService, NSDateFormatter, HTSEventContext, NSString;
@protocol IESLiveRoomService, IESLiveAudienceAdminPrompViewModelDelegate;

@interface IESLiveAudienceAdminPrompViewModel : NSObject

@property (retain, nonatomic) IESLiveAudienceAdminPromptService *promptService;
@property (retain, nonatomic) NSArray *promptList;
@property (nonatomic) long long duration;
@property (nonatomic) long long lastCount;
@property (retain, nonatomic) NSDateFormatter *dataFormatter;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveAudienceAdminPrompViewModelDelegate> delegate;
@property (retain, nonatomic) NSArray *promptViewModelList;
@property (retain, nonatomic) NSString *inputButtonTitle;
@property (retain, nonatomic) NSString *inputLimitToastText;
@property (retain, nonatomic) NSString *errorMsgToastText;
@property (nonatomic) unsigned long long textLimit;
@property (nonatomic) BOOL hideEmptyView;

- (id)initWithRoom:(id)a0 eventContext:(id)a1 diContext:(id)a2;
- (void)getPrompList;
- (void)sendPromp:(id)a0;
- (void)trackSendPromptMessage:(id)a0 event:(id)a1 error:(id)a2;
- (void)updatePromptListViewModle;
- (void).cxx_destruct;

@end
