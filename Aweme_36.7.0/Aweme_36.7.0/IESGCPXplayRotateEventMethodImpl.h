@interface IESGCPXplayRotateEventMethodImpl : IESGCPXplayRotateEventMethod

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleRotateToOrientation:(id)a0 duration:(id)a1 extraInfo:(id)a2 completionHandler:(id /* block */)a3;
- (long long)orientationForRotateType:(id)a0;
- (void)handleRotationErrorWithType:(id)a0 duration:(id)a1 completionHandler:(id /* block */)a2;

@end
