@class IESLiveLinkmicLayoutUIAdapter, NSString, IESLiveLinkmicLayoutStreamAttributes, IESLiveLinkmicLayoutUIAttributes;
@protocol IESLiveLinkmicLayoutLogger;

@interface IESLiveLinkmicLayout : NSObject

@property (retain, nonatomic) IESLiveLinkmicLayoutUIAttributes *uiAttributes;
@property (retain, nonatomic) IESLiveLinkmicLayoutStreamAttributes *streamAttributes;
@property (retain, nonatomic) IESLiveLinkmicLayoutUIAdapter *currentUIAdapter;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<IESLiveLinkmicLayoutLogger> logger;

- (id)attachingDIContext;
- (void)checkFileWithAdapter:(id)a0 completion:(id /* block */)a1;
- (void)buildUIWithAdapter:(id)a0 completion:(id /* block */)a1;
- (id)linkmicLayoutEngine;
- (void)buildUI:(id /* block */)a0;
- (void)buildUIWithAdapterSync:(id)a0;
- (void)mergeUI:(id)a0;
- (void)setUIAttributes:(id)a0;
- (void)logEvent:(id)a0 extraParams:(id)a1;
- (id)copy;
- (void).cxx_destruct;
- (id)description;

@end
