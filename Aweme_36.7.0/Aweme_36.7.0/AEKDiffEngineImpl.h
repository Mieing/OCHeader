@class NSString, AEKCoreUnitImpl;
@protocol AEKEditorConvertible;

@interface AEKDiffEngineImpl : NSObject <AEKDiffEngine>

@property (weak, nonatomic) id<AEKEditorConvertible> convertor;
@property (weak, nonatomic) AEKCoreUnitImpl *coreUnit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffFromMegaData:(id)a0 designateDiffRstTypes:(id)a1;
- (id)diffModel:(id)a0 fromModel:(id)a1 designateDiffRstTypes:(id)a2;
- (id)diffMegaData:(id)a0 fromMegaData:(id)a1 designateDiffRstTypes:(id)a2;
- (id)diffFromMegaData:(id)a0;
- (id)diffMegaData:(id)a0 fromMegaData:(id)a1;
- (id)initWithConvertor:(id)a0 coreUnit:(id)a1;
- (void).cxx_destruct;

@end
