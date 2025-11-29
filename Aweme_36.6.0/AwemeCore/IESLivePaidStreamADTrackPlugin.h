@class NSString;

@interface IESLivePaidStreamADTrackPlugin : NSObject <IESLivePaidStreamPlugin>

@property (copy, nonatomic) id /* block */ trackParamHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paidStream:(id)a0 willDisplayForBlockType:(unsigned long long)a1;
- (void)paidStream:(id)a0 actionForBlockType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithTrackParamHandler:(id /* block */)a0;
- (void)trackADEventWith:(id)a0;
- (void).cxx_destruct;

@end
