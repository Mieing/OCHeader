@class NSString;

@interface FlutterCgiPlugin : NSObject <MMFlutterPlugin, FlutterCgiHost>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)safeExtractBaseResponseWithFieldNumber:(int)a0 fromData:(id)a1;
+ (id)extractBaseResponseWithFieldNumber:(int)a0 fromData:(id)a1;
+ (id)cgiWrapRequest:(id)a0 finderExtInfo:(id)a1;
+ (void)privateSendCgiWrap:(id)a0 completion:(id /* block */)a1;
+ (void)privateSendCgiWrap:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

- (void)onAttachedToEngine:(id)a0;
- (void)sendRequest:(id)a0 completion:(id /* block */)a1;
- (void)sendFinderRequest:(id)a0 extInfo:(id)a1 completion:(id /* block */)a2;

@end
