@class NSString, NSMutableDictionary, IESLiveBackendRequestResult;

@interface IESLiveBackendSubscribeItem : NSObject

@property (retain, nonatomic) NSString *bizPath;
@property (retain, nonatomic) NSMutableDictionary *subscribeCompletes;
@property (retain, nonatomic) IESLiveBackendRequestResult *backendResult;
@property (nonatomic) double responseTimeInterval;
@property (nonatomic) double notifyTimeInterval;
@property (nonatomic) double subscribeStartTime;
@property (nonatomic) double requestDuration;
@property (nonatomic) BOOL resultCompleted;
@property (nonatomic) BOOL pbWithoutBody;

- (id)realIdentifierIdentifier:(id)a0;
- (void)dealWithOriginResp:(id)a0 modelClass:(Class)a1 format:(unsigned long long)a2;
- (void)subscribeIdentifier:(id)a0 complete:(id /* block */)a1;
- (void)removeSubscribeIdentifier:(id)a0;
- (void)notifyResultAll;
- (void)notifyResultWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)clear;

@end
