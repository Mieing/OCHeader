@class IESLiveMultiKTVStageLayoutHandler, NSString, IESLiveInteractionLayout;
@protocol IESLiveMultiKTVVirtualInteractStageDelegate;

@interface IESLiveMultiKTVVirtualInteractStage : NSObject <IESLiveInteractionStage>

@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (weak, nonatomic) IESLiveMultiKTVStageLayoutHandler *stageHandler;
@property (weak, nonatomic) id<IESLiveMultiKTVVirtualInteractStageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
