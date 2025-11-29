@class NSString, NSMutableArray;

@interface AWEIMConsecutiveChatDaysManager : NSObject <IESIMMessageSenderDelegate, IESIMConsecutiveChatDaysInterface>

@property (retain, nonatomic) NSMutableArray *currentRemindSingleCon;
@property (retain, nonatomic) NSMutableArray *currentRemindGroupCon;
@property (retain, nonatomic) NSMutableArray *hasDisplayRemindCon;
@property (retain, nonatomic) NSMutableArray *hasRecordDisplayRemindCon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)iesim_didReceiveSendMessageResponse:(id)a0;
- (void)iesim_didReceiveAsyncSendMessageResponse:(id)a0;
- (void)handleApplicationWillResignActiveNotification:(id)a0;
- (void)tabControllerDidChangeSelectedIndex:(id)a0;
- (void)handleIMBaseViewControllerWillDisAppear;
- (void)handleEnterMessageTabEvent;
- (void)recordRemindConDisplayTime;
- (void)clearLastShowData;
- (void).cxx_destruct;
- (id)sender;
- (id)init;
- (void)dealloc;

@end
