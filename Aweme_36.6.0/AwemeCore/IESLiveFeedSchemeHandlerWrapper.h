@class NSString;
@protocol IESLiveContainerRouter;

@interface IESLiveFeedSchemeHandlerWrapper : NSObject <IESLiveFeedSchemeHandler>

@property (retain, nonatomic) id<IESLiveContainerRouter> containerRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)openScheme:(id)a0;
- (BOOL)canOpenScheme:(id)a0;
- (void).cxx_destruct;

@end
