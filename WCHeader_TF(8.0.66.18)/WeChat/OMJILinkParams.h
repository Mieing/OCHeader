@class OMJILinkContextParams, OMJILinkAppClientParams;

@interface OMJILinkParams : NSObject

@property (readonly, nonatomic) OMJILinkContextParams *contextParams;
@property (readonly, nonatomic) OMJILinkAppClientParams *appClientParams;

- (id)initWithContextParams:(id)a0 appClientParams:(id)a1;
- (void).cxx_destruct;

@end
