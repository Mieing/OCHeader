@class IESLiveIMAppInfo, NSString;

@interface IESLiveIMHTTPFetcher : NSObject <IESLiveIMFetcher>

@property (nonatomic) long long fetchCounter;
@property (retain, nonatomic) IESLiveIMAppInfo *appInfo;
@property (copy, nonatomic) id /* block */ urlCallback;
@property (copy, nonatomic) id /* block */ queryFields;
@property (copy, nonatomic) id /* block */ paramsCallback;
@property (copy, nonatomic) id /* block */ headerCallback;
@property (copy, nonatomic) id /* block */ bodyCallBack;
@property (copy, nonatomic) id /* block */ stateCallback;
@property (nonatomic) long long state;
@property (nonatomic) BOOL shouldSkipEmptyBody;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleHeaders:(id)a0 toOutPacket:(id)a1;
- (id)readLastUrlString;
- (void)trackPollMessageInfoWith:(double)a0;
- (void)fetchWithContext:(id)a0 state:(id /* block */)a1 data:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
