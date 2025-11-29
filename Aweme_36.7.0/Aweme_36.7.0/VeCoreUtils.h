@interface VeCoreUtils : NSObject

+ (id)randomNum;
+ (id)concatedBaseUrl:(id)a0 andParams:(id)a1;
+ (id)separateActionParams:(id)a0;
+ (void)setSubViewLayout:(id)a0 containerView:(id)a1 podSize:(struct CGSize { double x0; double x1; })a2;
+ (long long)returnKeyTypeWithActionId:(long long)a0;
+ (long long)actionIdWithImeOptions:(long long)a0;
+ (id)networkType;
+ (id)deviceId;
+ (id)deviceModel;
+ (id)uuid;
+ (id)sessionId;

@end
