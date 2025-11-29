@class IESLiveStreamUnifyLayoutContext, NSString, IESLiveStreamPlayerLayoutMachine, IESLiveStreamUnifyBaseLayoutMachine;
@protocol IESLiveStreamUnifyLayoutPlayer;

@interface IESLiveStreamPlayerLayoutBase : NSObject <IESLiveStreamPlayerLayout, IESLiveStreamUnifyLayout>

@property (readonly, weak, nonatomic) IESLiveStreamPlayerLayoutMachine *layoutMachine;
@property (nonatomic) unsigned long long layoutType;
@property (readonly, weak, nonatomic) IESLiveStreamUnifyBaseLayoutMachine *unifyLayoutMachine;
@property (readonly, weak, nonatomic) id<IESLiveStreamUnifyLayoutPlayer> player;
@property (readonly, nonatomic) IESLiveStreamUnifyLayoutContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)layoutWithMetaInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mainBounds;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (id)initWithPlayer:(id)a0 layoutMachine:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (void)dealloc;

@end
