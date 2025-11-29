@class NSString;

@interface FlowAVSDK.FlowAVSessionAudioASRResponseResult : _TtCs12_SwiftObject {
    void /* function */ text;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic) float startTime;
@property (nonatomic) float endTime;
@property (nonatomic) BOOL isInterim;

- (id)initWithText:(id)a0 startTime:(float)a1 endTime:(float)a2 isInterim:(BOOL)a3;

@end
