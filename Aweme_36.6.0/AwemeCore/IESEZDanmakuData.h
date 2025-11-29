@class NSString, UIView;
@protocol IESEZDanmakuViewProtocol, IESEZDanmakuDataDelegate;

@interface IESEZDanmakuData : NSObject <IESEZDanmakuDataPriorityProtocol, IESEZDanmakuDataProtocol>

@property (nonatomic) unsigned long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *tag;
@property (weak, nonatomic) id<IESEZDanmakuDataDelegate> delegate;
@property (retain, nonatomic) UIView<IESEZDanmakuViewProtocol> *danmakuView;
@property (retain, nonatomic) id danmakuViewModel;
@property (copy, nonatomic) NSString *viewClassName;
@property (nonatomic) double duration;
@property (readonly, nonatomic, getter=isActivated) BOOL activated;
@property (nonatomic) unsigned long long controlState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithTime:(double)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)start;
- (void)resume;

@end
