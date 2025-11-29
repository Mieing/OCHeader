@class TTVideoEngineLogView, UIView;

@interface TTVideoEnginePlayerViewWrapper : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) TTVideoEngineLogView *debugView;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
