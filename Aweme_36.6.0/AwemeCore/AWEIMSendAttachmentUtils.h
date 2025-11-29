@class NSString;

@interface AWEIMSendAttachmentUtils : NSObject <IESIMSendAttachmentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)getIMAttachmentLocalExtOptEnable;
+ (void)storeTranscodeResultWithUntranscodedVideo:(id)a0 resultPath:(id)a1 modifyDate:(id)a2 useOrigin:(BOOL)a3;
+ (id)getTranscodeResultWithUntranscodedVideo:(id)a0 modifyDate:(id)a1 useOrigin:(BOOL)a2;
+ (id)getStoreKeyUntranscodedVideo:(id)a0 modifyDate:(id)a1 useOrigin:(BOOL)a2;
+ (void)addSendingMsgTimesWithMsgType:(id)a0;
+ (void)subtractSendingMsgTimesWithMsgType:(id)a0;
+ (void)trackBackgroundUnfinishedMediaMsg;
+ (id)recordSendMediaMsgQueue;
+ (void)p_trackBackgroundUnfinishedMsgWithMsgType:(id)a0;


@end
