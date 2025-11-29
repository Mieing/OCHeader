@interface AWEStudioCreateSchemaIMP : NSObject

+ (void)schemaStudioCreateOriginalTextWithPublishModel:(id)a0 completion:(id /* block */)a1;
+ (void)router_default:(id)a0 schemaParams:(id)a1 promiseCompletion:(id /* block */)a2;
+ (unsigned long long)schemaParseType:(id)a0;
+ (id)routerParamConvertSchemaParam:(id)a0 routerType:(unsigned long long)a1;
+ (void)router_use_sticker:(id)a0 schemaParams:(id)a1 schemaURL:(id)a2 promiseCompletion:(id /* block */)a3 routerCompletion:(id /* block */)a4 transitionInfo:(id)a5;
+ (void)router_reuse_video_sticker:(id)a0 schemaParams:(id)a1 promiseCompletion:(id /* block */)a2;
+ (void)router_duet_video:(id)a0 schemaParams:(id)a1 schemaURL:(id)a2 promiseCompletion:(id /* block */)a3 routerCompletion:(id /* block */)a4 transitionInfo:(id)a5;
+ (void)router_use_music:(id)a0 schemaParams:(id)a1 promiseCompletion:(id /* block */)a2 routerCompletion:(id /* block */)a3;
+ (void)router_use_challenge:(id)a0 schemaParams:(id)a1 transitionInfo:(id)a2 promiseCompletion:(id /* block */)a3 routerCompletion:(id /* block */)a4;
+ (void)router_normal:(id)a0 schemaParams:(id)a1 promiseCompletion:(id /* block */)a2;
+ (void)router_mv_detail:(id)a0 schemaParams:(id)a1 promiseCompletion:(id /* block */)a2;
+ (void)router_guide:(id)a0 schemaParams:(id)a1 promiseCompletion:(id /* block */)a2 routerCompletion:(id /* block */)a3;
+ (void)router_albumWithSchemaParams:(id)a0 promiseCompletion:(id /* block */)a1 routerCompletion:(id /* block */)a2;
+ (void)router_use_info_stickerWithSchemaParams:(id)a0 promiseCompletion:(id /* block */)a1;
+ (void)router_im_chatWithSchemaParams:(id)a0 promiseCompletion:(id /* block */)a1;
+ (void)router_multiWithSchemaParams:(id)a0 routerCompletion:(id /* block */)a1;
+ (void)router_originalTextWithSchemaParams:(id)a0 promiseCompletion:(id /* block */)a1 routerCompletion:(id /* block */)a2;
+ (void)router_originalTextWithPublishModel:(id)a0 promiseCompletion:(id /* block */)a1 routerCompletion:(id /* block */)a2;
+ (void)schemaStudioCreateSchemaParams:(id)a0 transitionInfo:(id)a1 completion:(id /* block */)a2;
+ (void)schemaStudioCreateMultiJumpWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)schemaStudioCreateOriginalTextWithParams:(id)a0 completion:(id /* block */)a1;

@end
