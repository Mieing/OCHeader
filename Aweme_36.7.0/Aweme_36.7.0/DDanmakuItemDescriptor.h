@class DDanmakuItemBaseView;
@protocol DDanmakuItemNodeProtocol, DDanmakuItemViewProtocol, DDanmakuDataProtocol;

@interface DDanmakuItemDescriptor : NSObject

@property (retain, nonatomic) id<DDanmakuDataProtocol> metaData;
@property (weak, nonatomic) DDanmakuItemBaseView<DDanmakuItemViewProtocol> *itemView;
@property (nonatomic) double totalLifeTime;
@property (nonatomic) double remainLifeTime;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL hidden;
@property (retain, nonatomic) id<DDanmakuItemNodeProtocol> metalInfo;

- (id)initWithMetaData:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (unsigned long long)hash;
- (void)reset;
- (void)resume;
- (BOOL)isEqual:(id)a0;

@end
