@class NSString, IESProcessConfig, IESImgPreProcessor;

@interface IESImgProcessBaseImpl : NSObject <IESImgProcessInterface> {
    struct ILensEngineInterface { void /* function */ **x0; } *_lenEngine;
    struct ILensFlowGraphInterface { void /* function */ **x0; } *_flowGraph;
}

@property (retain, nonatomic) IESProcessConfig *config;
@property (nonatomic) BOOL isInitFinished;
@property (retain, nonatomic) IESImgPreProcessor *imgPreProcessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNeedsImageSR:(id)a0;
- (void)Net_Forward:(id)a0 completetion:(id /* block */)a1;
- (id)processData:(id)a0 outNeedsProcess:(BOOL *)a1 outError:(id *)a2;
- (BOOL)isNeedsPostProcess:(int)a0 inH:(int)a1;
- (void *)imageDataFromUIImage:(id)a0 width:(int *)a1 height:(int *)a2 isNeedsPoster:(BOOL *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
