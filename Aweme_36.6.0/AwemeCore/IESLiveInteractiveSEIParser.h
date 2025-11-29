@protocol IESLiveMonitor;

@interface IESLiveInteractiveSEIParser : NSObject

@property (retain, nonatomic) id<IESLiveMonitor> monitor;

- (void)parseSEIWith:(id)a0 completion:(id /* block */)a1;
- (id)getParseResultWith:(id)a0 metaSEI:(id)a1;
- (void).cxx_destruct;

@end
