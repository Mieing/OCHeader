@class NSLock, NSMutableArray;
@protocol IESLivePipelineDelegate;

@interface IESLiveGamePipelinePlumber : NSObject

@property (retain, nonatomic) NSMutableArray *portArr;
@property (retain, nonatomic) NSMutableArray *pipelineArr;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) id<IESLivePipelineDelegate> pCurPipeline;
@property (copy, nonatomic) id /* block */ throwPacketBlock;

- (id /* block */)addPipeline;
- (id /* block */)addPort;
- (void)recurPipeline:(id)a0 packet:(id)a1;
- (void)handlePacket:(id)a0;
- (void).cxx_destruct;

@end
