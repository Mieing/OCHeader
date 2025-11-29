@class NSString;

@interface AWEIMSendAttachmentProcess : AWEIMProcess <AWEIMStageStatusHandler>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
