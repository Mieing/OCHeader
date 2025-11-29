@class NSDictionary, NSString;

@interface IESLiveKTVMusicFeedbackApi : HTSLiveApi <IESLiveInteractFeedbackAPI>

@property (retain, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchFeedbackCategoriesAtScene:(unsigned long long)a0 extraParams:(id)a1 callback:(id /* block */)a2;
- (id)apiRequestByPath:(id)a0 callback:(id /* block */)a1;
- (void)uploadFeedbackWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
