@class NSString;

@interface IESIMResourceLoaderImpl : NSObject <IESIMResourceLoaderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)loadLivePhotoVideo:(id)a0 completion:(id /* block */)a1;

@end
