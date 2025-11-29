@class NSString, AWERecordBeautyItemExtraModel, IESEffectModel, NSMutableArray;
@protocol AWERecordBeautyNodeProtocol;

@interface AWERecordBeautyItemModel : NSObject <AWERecordBeautyNodeProtocol>

@property (retain, nonatomic) IESEffectModel *iesEffectModel;
@property (copy, nonatomic) NSString *effectResourcePath;
@property (retain, nonatomic) AWERecordBeautyItemExtraModel *extra;
@property (retain, nonatomic) NSMutableArray *childItems;
@property (nonatomic) BOOL preloadedIsChildItem;
@property (weak, nonatomic) id<AWERecordBeautyNodeProtocol> parentNode;
@property (retain, nonatomic) NSMutableArray *childNodes;
@property (retain, nonatomic) NSMutableArray *childExtraNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dd_observerStatuses:(id)a0 inManager:(id)a1 block:(id /* block */)a2;

- (id)initWithIESEffect:(id)a0 shouldUseComposerParams:(BOOL)a1;
- (BOOL)isCollection;
- (id)beautifyItemModels;
- (id)dd_statusInState:(id)a0;
- (void)dd_setStatus:(id)a0 inState:(id)a1;
- (id)dd_observeStatusInManager:(id)a0 block:(id /* block */)a1;
- (void)addChildExtraNodes:(id)a0;
- (void)removeAllChildNodes;
- (void)removeAllChildExtraNodes;
- (id)initWithIESEffect:(id)a0;
- (id)firstBeautifyItemModel;
- (void).cxx_destruct;
- (id)init;
- (void)addChildNode:(id)a0;
- (id)nodeName;
- (id)nodeId;

@end
