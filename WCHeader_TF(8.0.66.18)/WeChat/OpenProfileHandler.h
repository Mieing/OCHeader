@class OpenApiParameter;

@interface OpenProfileHandler : MMObject

@property (retain, nonatomic) OpenApiParameter *parameter;

- (void)startHandleOpenProfile:(id)a0;
- (void)createWechatOpenProfile;
- (void)cancelOpenProfile;
- (void).cxx_destruct;

@end
