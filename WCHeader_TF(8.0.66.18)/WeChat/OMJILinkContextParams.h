@class OMJILinkContextParamsExternalManaged, OMJILinkContextParamsSelfManaged;

@interface OMJILinkContextParams : NSObject

@property (readonly, nonatomic) OMJILinkContextParamsSelfManaged *paramsSelfManaged;
@property (readonly, nonatomic) OMJILinkContextParamsExternalManaged *paramsExternalManaged;

- (id)initWithParamsSelfManaged:(id)a0;
- (id)initWithParamsExternalManaged:(id)a0;
- (void).cxx_destruct;

@end
