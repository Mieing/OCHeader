@class AWEAwemeModel;

@interface AWEBDALokiComponent : BDALokiComponent {
    AWEAwemeModel *_awemeModel;
}

@property (copy, nonatomic) id /* block */ lokiCardStatus;

- (void)setCustomJsBridges:(id)a0;
- (id)initWithContainer:(id)a0 lokiModel:(id)a1 aweme:(id)a2;
- (void)createLokiRifleViewAndConfig;
- (void).cxx_destruct;
- (void)reset;

@end
