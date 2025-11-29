@class IESLiveAPISpecialParamsService;

@interface IESLiveInteractiveAPI : HTSLiveApi

@property (retain, nonatomic) IESLiveAPISpecialParamsService *specialParamsService;

- (id)initWithTrackContext:(id)a0;
- (void)turnOnWithParams:(id)a0 completion:(id /* block */)a1;
- (id)apiRequestByPath:(id)a0 callback:(id /* block */)a1;
- (void)turnOnWithParamsDict:(id)a0 completion:(id /* block */)a1;
- (void)syncDegradeRequest:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)post:(id)a0;
- (id)get:(id)a0;

@end
