@class NSObject, NSString, TIMXSDKInstance, NSNumber, TIMXOMessagesInConversationDataSource;
@protocol OS_dispatch_source;

@interface TIMXECOMMessageReadPollingHelper : NSObject <TIMXMessageReadManagerDelegate> {
    TIMXSDKInstance *_r;
}

@property (weak, nonatomic) TIMXOMessagesInConversationDataSource *dataSource;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSNumber *convShortId;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *messageReadPollingTimer;
@property (copy, nonatomic) id /* block */ readMessageChangeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageReadDidUpdateWithArrConversationID:(id)a0;
- (void)startMessageReadPollingTimerWithInterval:(unsigned long long)a0;
- (id)initWithDataSource:(id)a0 rootObject:(id)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
