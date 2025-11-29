@class NSString;

@interface PTYTaskConfig : NSObject <IESLiveTaskConfig, BDPClientAITaskConfig>

@property (nonatomic) BOOL async;
@property (copy, nonatomic) NSString *entrance;
@property (nonatomic) float pendingTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL async;
@property (copy, nonatomic) NSString *entrance;
@property (nonatomic) float pendingTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL async;
@property (copy, nonatomic) NSString *entrance;
@property (nonatomic) float pendingTimeout;
@property (nonatomic) unsigned long long callType;

- (void).cxx_destruct;
- (id)init;

@end
