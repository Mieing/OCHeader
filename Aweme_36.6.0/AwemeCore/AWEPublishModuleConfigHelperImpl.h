@class NSString;

@interface AWEPublishModuleConfigHelperImpl : NSObject <ACCPublishModuleConfigHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aACCMidVideoCreationProtocolClass;

- (BOOL)isImageAlbum:(id)a0;
- (BOOL)isImageAlbumOrMixed:(id)a0;
- (BOOL)isImageAlbumSlides:(id)a0;
- (BOOL)isImageUnify:(id)a0;
- (BOOL)isNewPostPagePreviewLayout:(id)a0;
- (BOOL)imageAlbumShortenCreationEnable:(id)a0;
- (id)aACCMidVideoCreationProtocol;
- (BOOL)singleImageUnifyToVideo:(id)a0;

@end
