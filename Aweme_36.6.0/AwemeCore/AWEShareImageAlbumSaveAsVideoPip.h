@class NSString;

@interface AWEShareImageAlbumSaveAsVideoPip : NSObject <ACCImageAlbumSaveAsVideoPip>

@property (copy, nonatomic) id /* block */ cancelHandler;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
