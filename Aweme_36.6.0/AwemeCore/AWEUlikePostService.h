@class NSString;

@interface AWEUlikePostService : HTSService <AWEUlikePostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createUlikePostWithAweme:(id)a0 openID:(id)a1 trackParams:(id)a2 completion:(id /* block */)a3;


@end
