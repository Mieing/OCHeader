@class NSString, AffBizDynamicCardMrgEventCallback;

@interface AffBizDynamicCardMrgEventImpl : NSObject <AffBizDynamicCardMrgEventBase> {
    AffBizDynamicCardMrgEventCallback *m_callBack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)callOnAdServerInfoAsync:(int)a0 adInfo:(id)a1;
- (void)callOnRecFeedsAdServerInfoAsync:(int)a0 adInfo:(id)a1;
- (void)callOnDynamicCardInfoAsync:(int)a0 dynamicCardType:(int)a1 msgId:(unsigned long long)a2 frameSetName:(id)a3 frameSetData:(id)a4;
- (void).cxx_destruct;

@end
