@class NSString;
@protocol IESIMClientTimestampAdjustManagerProtocol;

@interface IESIMServerTimeService : HTSService <IESIMServerTimeService>

@property (readonly, nonatomic) BOOL useUgServerTime;
@property (readonly, nonatomic) id<IESIMClientTimestampAdjustManagerProtocol> timeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentServerTime;
- (void).cxx_destruct;
- (id)init;

@end
