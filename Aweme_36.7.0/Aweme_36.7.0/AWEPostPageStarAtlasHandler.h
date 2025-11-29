@class NSString, NSObject;
@protocol AWEPostPageContext;

@interface AWEPostPageStarAtlasHandler : NSObject <AWEPostPageStarAtlasService>

@property (retain, nonatomic) NSObject *requestStarAtlasOrdersSignal;
@property (retain, nonatomic) id didUpdateStarAtlasTypeSignal;
@property (nonatomic) long long cleanStarAtlasDraftSignal;
@property (nonatomic) BOOL anchorCheckFail;
@property (nonatomic) BOOL isStarRequestFinish;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (void)sendRequestStarAtlasOrdersSignal:(unsigned long long)a0 model:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
