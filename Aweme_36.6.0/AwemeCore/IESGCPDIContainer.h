@class NSMapTable, IESAppContext;
@protocol IESGCPDIContext;

@interface IESGCPDIContainer : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<IESGCPDIContext> retainedContext;
@property (weak, nonatomic) IESGCPDIContainer *parentDI;
@property (retain, nonatomic) IESAppContext *realDI;
@property (retain, nonatomic) NSMapTable *multicasterMap;

- (id)objectWithProtocol:(id)a0;
- (BOOL)bindObject:(id)a0 forProtocol:(id)a1;
- (id)initWithType:(unsigned long long)a0 context:(id)a1 realDI:(id)a2 parentDI:(id)a3;
- (BOOL)multiBindObject:(id)a0 forProtocol:(id)a1;
- (BOOL)unbindObject:(id)a0 forProtocol:(id)a1;
- (void).cxx_destruct;

@end
