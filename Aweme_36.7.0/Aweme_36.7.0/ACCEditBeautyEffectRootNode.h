@class NSString, NSMutableArray;
@protocol ACCEditBeautyEffectNodeProtocol;

@interface ACCEditBeautyEffectRootNode : NSObject <ACCEditBeautyEffectNodeProtocol>

@property (weak, nonatomic) id<ACCEditBeautyEffectNodeProtocol> parentNode;
@property (retain, nonatomic) NSMutableArray *childNodes;
@property (retain, nonatomic) NSMutableArray *childExtraNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addChildExtraNodes:(id)a0;
- (void)removeAllChildNodes;
- (void)removeAllChildExtraNodes;
- (void).cxx_destruct;
- (id)init;
- (void)addChildNode:(id)a0;
- (id)nodeName;
- (id)nodeId;

@end
