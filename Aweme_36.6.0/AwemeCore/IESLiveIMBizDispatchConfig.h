@class NSString, NSSet;

@interface IESLiveIMBizDispatchConfig : NSObject

@property (copy, nonatomic) NSString *bizIdentity;
@property (nonatomic) BOOL needCache;
@property (copy, nonatomic) id /* block */ messageCacheType;
@property (copy, nonatomic) id /* block */ delayTypeDispatchTime;
@property (nonatomic) double dispatchInterval;
@property (nonatomic) long long dispatchCount;
@property (nonatomic) BOOL enableMessageReplay;
@property (retain, nonatomic) NSSet *needReplayMessagesSet;
@property (nonatomic) BOOL enableWRDS;
@property (retain, nonatomic) Class dataSyncClass;
@property (copy, nonatomic) id /* block */ dataSyncModelCreateBlock;

- (void).cxx_destruct;

@end
