@class NSString, AWEVideoPublishViewModel;

@interface AWERecordFlowConfigProtocolImpl : NSObject <ACCRecordFlowConfigProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
