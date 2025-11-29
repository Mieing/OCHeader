@class NSString;

@interface IESLiveAudioChatStageComponent : IESLiveInteractComponentBase <IESLiveAudioChatStageRouter>

@property (nonatomic) BOOL isStageInsert;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } stageFrame;
@property (nonatomic) unsigned long long stageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
