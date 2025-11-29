@class NSString, NSArray;
@protocol IESECBlenderNodeObserverProtocol, IESECBlenderNodeProtocol;

@interface IESECBlenderNode : MTLModel <IESECBlenderNodeProtocol>

@property (retain, nonatomic) NSString *nodeId;
@property (retain, nonatomic) NSString *fields;
@property (retain, nonatomic) NSArray *childrens;
@property (weak, nonatomic) id<IESECBlenderNodeProtocol> parentNode;
@property (weak, nonatomic) id<IESECBlenderNodeObserverProtocol> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)childrensJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)notifyObserverWork;
- (void)updateWithChildrens:(id)a0;
- (void)updateWithData:(id)a0 andChildrens:(id)a1;
- (BOOL)checkChangStatusWithNewData:(id)a0;
- (BOOL)checkChangStatusWithNewChildrens:(id)a0;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;

@end
