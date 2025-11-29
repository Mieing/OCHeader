@class IESLiveGeneralCarnivalMessageView, NSString, HTSLiveGeneralCarnivalMessage;

@interface IESLiveCarnivalStore : NSObject <HTSLiveMessageSubscriber, IESLiveDataSyncDelegate>

@property (retain, nonatomic) HTSLiveGeneralCarnivalMessage *cacheGeneralCarnival;
@property (retain, nonatomic) IESLiveGeneralCarnivalMessageView *generalCarnivalMessageView;
@property (nonatomic) BOOL addDanmakuEnabled;
@property (nonatomic) BOOL degradeForCarnival;
@property (nonatomic) BOOL enableEmphasisArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didSetAttachingDIContext;
- (void)generalCarnivalWillAppear:(BOOL)a0 withMsg:(id)a1;
- (void)generalCarnivalSpecialContentShow:(BOOL)a0;
- (void)handleSyncData:(id)a0;
- (void)handleChatCarnivalMessageWithConfig:(id)a0;
- (BOOL)enableProcessGeneralCarnival:(id)a0;
- (void)handleGeneralCarnivalMessageWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
