@class NSString;

@interface IESECLiveGoodsPageGetRequest : IESECLiveGoodsGetRequest <IESECLiveGoodsRequestParamsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pageGetWithGetRequest:(id)a0;

- (id)buildParams;
- (id)buildParamsWithScene:(id)a0 preloadParams:(id)a1;

@end
