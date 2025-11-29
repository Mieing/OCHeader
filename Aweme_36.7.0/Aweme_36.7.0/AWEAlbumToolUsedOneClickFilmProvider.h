@class NSString;

@interface AWEAlbumToolUsedOneClickFilmProvider : NSObject <AWEEditToolUsedProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)isAlbumToolUsedWithPublishModel:(id)a0;
- (BOOL)userChangedInEditPageWithPublishModel:(id)a0;

@end
