@class NSString;

@interface AWEACCStickerNetServiceImpl : NSObject <ACCStickerNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestStickerWithId:(id)a0 completion:(id /* block */)a1;

@end
