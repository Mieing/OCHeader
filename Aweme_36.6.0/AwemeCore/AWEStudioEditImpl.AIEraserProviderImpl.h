@interface AWEStudioEditImpl.AIEraserProviderImpl : HTSService <AWEStudioAIEraserProviderProtocol>

- (id)fetchEraserViewController:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 publishModel:(id)a2 featureConfig:(id)a3 creationID:(id)a4 lastSelectedTab:(long long)a5 lastSelectedSliderValue:(long long)a6 completion:(id /* block */)a7;
- (id)init;

@end
