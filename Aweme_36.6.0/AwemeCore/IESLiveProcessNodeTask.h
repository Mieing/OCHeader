@class IESLivePublicScreenNodeStyleConfig;
@protocol IESLiveMessageNodeStrategyProtocol;

@interface IESLiveProcessNodeTask : NSObject

@property (nonatomic) unsigned long long taskType;
@property (retain, nonatomic) id dataSource;
@property (retain, nonatomic) IESLivePublicScreenNodeStyleConfig *nodeStyleConfig;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) id<IESLiveMessageNodeStrategyProtocol> customNodeStrategy;

- (id)initWithType:(unsigned long long)a0 dataSource:(id)a1 styleConfig:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
