@interface CMCExceptionUploader : NSObject

+ (void)uploadUserExceptionWithType:(id)a0 title:(id)a1 subTitle:(id)a2 customParams:(id)a3 filters:(id)a4 callback:(id /* block */)a5;
+ (void)uploadAllThreadUserExceptionWithType:(id)a0 customParams:(id)a1 filters:(id)a2 callback:(id /* block */)a3;
+ (BOOL)enableWithType:(id)a0 title:(id)a1 subTitle:(id)a2;

@end
