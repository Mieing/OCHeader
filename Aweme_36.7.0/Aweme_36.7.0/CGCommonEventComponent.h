@class NSString;

@interface CGCommonEventComponent : CGObject <CGCommonEventComponentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)_handleLocalCommonNotify:(id)a0;
- (void)_handlePodInfoNotify:(id)a0;
- (void)_handlePushStreamResult:(id)a0;
- (void)_handleRecordResult:(id)a0;

@end
