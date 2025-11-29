@class NSString, IESLiveLinkLiveRtc;
@protocol IMultiChorusDelegate;

@interface IESLiveLinkMultiChorusManagerConfig : NSObject

@property (weak, nonatomic) IESLiveLinkLiveRtc *rtcEngineKit;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (weak, nonatomic) id<IMultiChorusDelegate> chorusDelegate;

- (void).cxx_destruct;

@end
