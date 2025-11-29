@class NSString;

@interface IESEZDanmakuInteractData : IESEZDanmakuData <IESEZDanmakuViewDelegate>

@property (nonatomic) BOOL enableInteract;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDanmakuView:(id)a0;
- (void)didClickDanmakuView:(id)a0;

@end
