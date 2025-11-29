@class NSString, WAShareAppMessageForwardLogicControllerComponentModel, WAShareAppMessageCommonParamsModel, WAShareAppMessageContextModel, ForwardMessageLogicController, NSMutableDictionary, NSMutableArray;
@protocol WAShareAppMessageForwardLogicControllerComponentDelegate;

@interface WAShareAppMessageForwardLogicControllerComponent : NSObject <ForwardMessageLogicDelegate>

@property (retain, nonatomic) WAShareAppMessageContextModel *shareContextModel;
@property (retain, nonatomic) WAShareAppMessageCommonParamsModel *paramsModel;
@property (retain, nonatomic) WAShareAppMessageForwardLogicControllerComponentModel *componentModel;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (retain, nonatomic) NSMutableDictionary *shareKeys;
@property (retain, nonatomic) NSMutableArray *reportArray;
@property (nonatomic) unsigned int currentEventID;
@property (weak, nonatomic) id<WAShareAppMessageForwardLogicControllerComponentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShareContextModel:(id)a0 paramsModel:(id)a1 componentModel:(id)a2;
- (void)getShareInfoWithContactList:(id)a0;
- (void)sendGetShareInfoWithRequest:(id)a0;
- (void)addKey:(id)a0 val:(id)a1 toNodes:(id)a2;
- (void)addReportShareParamWithContacts:(id)a0;
- (id)transChatRoomInfosToAuthRooms:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)OnForwardMessageSelectSession:(id)a0;
- (void)OnForwardWeAppMessageSend:(id)a0 appMsgItem:(id)a1;
- (void).cxx_destruct;

@end
