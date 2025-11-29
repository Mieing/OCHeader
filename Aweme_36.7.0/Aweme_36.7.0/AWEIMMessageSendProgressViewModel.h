@class AWEIMMessageSendProgressStage, NSString;

@interface AWEIMMessageSendProgressViewModel : NSObject <AWEIMMessageSendProgressStageDelegate>

@property (retain, nonatomic) AWEIMMessageSendProgressStage *iCloudStage;
@property (retain, nonatomic) AWEIMMessageSendProgressStage *uploadStage;
@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
