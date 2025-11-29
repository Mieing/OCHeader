@class NSString;
@protocol AWEStudioAlbumUtilsServiceProtocol;

@interface AWEStudioAlbumService : HTSService <AWEStudioAlbumServiceProtocol>

@property (readonly, nonatomic) id<AWEStudioAlbumUtilsServiceProtocol> utils;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
