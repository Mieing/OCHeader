@interface CJPayFaceRecogUtil : NSObject

+ (void)getTicketWithConfigModel:(id)a0 completion:(id /* block */)a1;
+ (void)asyncUploadFaceVideoWithAppId:(id)a0 merchantId:(id)a1 videoPath:(id)a2 context:(id)a3;
+ (id)createFaceRecogAlertModelWithResponse:(id)a0 faceRecogConfigModel:(id)a1;
+ (id)createFullScreenSignPageModelWithResponse:(id)a0 faceRecogConfigModel:(id)a1;
+ (void)asyncUploadFaceVideoWithAppId:(id)a0 merchantId:(id)a1 videoPath:(id)a2 context:(id)a3 noLoginParams:(id)a4;
+ (void)getTicketWithResponse:(id)a0 createOrderResponse:(id)a1 source:(id)a2 fromVC:(id)a3 extraInfo:(id)a4 completion:(id /* block */)a5;
+ (void)tryPoptoTopHalfVC:(id)a0;

@end
