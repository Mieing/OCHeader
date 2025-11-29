@protocol AWEHttpTask;

@interface AWEDislikePanelNetworkHelper : NSObject

@property (nonatomic) BOOL isRequesting;
@property (weak, nonatomic) id<AWEHttpTask> task;

- (id)arrayToJsonString:(id)a0;
- (id)modelToJsonDictionary:(id)a0;
- (void)requestDimensionInfo:(id)a0 formerDimensions:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
