@class NSString;

@interface AWEMixVideoShareManager : NSObject <AWEMixVideoShareManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)popMixShareOn:(id)a0 withMixModel:(id)a1 mixVideos:(id)a2 previousPage:(id)a3 currentVideo:(id)a4 pageType:(id)a5 logExtraDict:(id)a6;
+ (id)mixButtonTitleWithModel:(id)a0;
+ (void)mixButtonDidClickWithModel:(id)a0 enterFrom:(id)a1 completionBlock:(id /* block */)a2;
+ (void)enterCreateMixPageWithEnterFrom:(id)a0 params:(id)a1;
+ (void)enterManagerMixPageWithModels:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (void)enterManagerMixPageWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (void)enterModifyMixPageWithModel:(id)a0 enterFrom:(id)a1 completionBlock:(id /* block */)a2;


@end
