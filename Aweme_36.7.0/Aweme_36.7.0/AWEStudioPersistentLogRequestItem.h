@class NSString;

@interface AWEStudioPersistentLogRequestItem : NSObject <AWEStudioPersistentLogRequestItem>

@property (retain, nonatomic) NSString *creationID;
@property (nonatomic) long long currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)eventLog;

@end
