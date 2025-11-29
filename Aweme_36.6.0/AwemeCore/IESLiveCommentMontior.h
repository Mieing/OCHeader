@class NSString;

@interface IESLiveCommentMontior : NSObject

@property (copy, nonatomic) NSString *indexType;
@property (nonatomic) double beginTimeStamp;

+ (void)monitorCommentInterfaceCallWithEnterFrom:(id)a0 requestSource:(id)a1 extraParams:(id)a2 diContext:(id)a3;
+ (void)monitorCommentPanelDisplayDuration:(double)a0 extraParams:(id)a1 diContext:(id)a2;

- (id)initWithType:(unsigned long long)a0 diContext:(id)a1;
- (void)beginSend;
- (void)sendSuccessfullyWithExtraParams:(id)a0;
- (void)sendFailureWithError:(id)a0 extraParams:(id)a1;
- (id)switchTypeToString:(unsigned long long)a0;
- (void)monitor:(BOOL)a0 withError:(id)a1 extraParams:(id)a2;
- (void).cxx_destruct;

@end
