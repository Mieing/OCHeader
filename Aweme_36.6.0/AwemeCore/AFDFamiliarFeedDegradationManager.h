@class NSString;

@interface AFDFamiliarFeedDegradationManager : NSObject <AFDFamiliarFeedDegradationManagerProtocol>

@property (nonatomic) BOOL firstFrameBlockEnable;
@property (nonatomic) double firstFrameBlockTime;
@property (nonatomic) BOOL hasBlockedFirstFrame;
@property (nonatomic) BOOL initFetchBlockEnable;
@property (nonatomic) double initFetchBlockTime;
@property (nonatomic) BOOL scrollBlockEnable;
@property (nonatomic) double scrollBlockTime;
@property (nonatomic) long long scrollBlockType;
@property (nonatomic) BOOL hasBlockedInitFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)p_setupFirstFrameBlock;
- (void)p_setupInitFetchBlock;
- (void)p_setupScrollFrameBlock;
- (void)blockFirstFrameIfNeeded;
- (void)blockScrollIfNeeded:(long long)a0;
- (id)init;

@end
