@interface BDPPluginOpenPlatform : BDPBridgeInstancePlugin

+ (long long)getCodeOffsetWithErrCode:(long long)a0;
+ (id)getMsgWithErrCode:(long long)a0;
+ (long long)errCodeWithErrorCode:(long long)a0;
+ (id)errorTypeWithErrorCode:(long long)a0;

- (void)p_setVisibilityWithIsShow:(BOOL)a0 uniqueID:(id)a1;
- (void)joinGroupDirectlyWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setJoinGroupButtonVisibilityWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
