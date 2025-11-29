@class NSString;

@interface ACCImageAlbumNoteService : HTSService <AWEStudioImageAlbumNoteServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableAutoCropForNoteWithImageAlbum:(id)a0 publishModel:(id)a1;


@end
