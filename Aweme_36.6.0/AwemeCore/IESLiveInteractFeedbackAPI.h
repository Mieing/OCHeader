@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveInteractFeedbackAPI : HTSLiveApi <IESLiveInteractFeedbackAPI>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchFeedbackCategoriesAtScene:(unsigned long long)a0 extraParams:(id)a1 callback:(id /* block */)a2;
- (id)apiRequestByPath:(id)a0 callback:(id /* block */)a1;
- (void)uploadFeedbackWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchPlaymodeFeedbackCategoriesAtScene:(unsigned long long)a0 playMode:(int)a1 extraParams:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
