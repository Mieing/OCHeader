@class NSString;

@interface AWEYAPThirdChannelService : HTSService <AWEYAPThirdChannelService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processAuthResult:(id)a0 standbyCallback:(id /* block */)a1;
- (void)setWxUniversalLink:(id)a0;
- (void)registerAuthAliYapScheme:(id)a0;
- (BOOL)canAliYapProcessURL:(id)a0;
- (void)authAliYap:(id)a0 callback:(id /* block */)a1;
- (void)processOrderWithYapmentResult:(id)a0 standbyCallback:(id /* block */)a1;
- (void)yapOrder:(id)a0 fromScheme:(id)a1 callback:(id /* block */)a2;

@end
