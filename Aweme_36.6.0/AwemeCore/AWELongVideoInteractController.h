@class NSString;

@interface AWELongVideoInteractController : NSObject <AWELongVideoInteractControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCollectLongVideo:(id)a0;
+ (id)disableCollectLongVideoString:(id)a0;
+ (BOOL)canCommentLongVideo:(id)a0;
+ (BOOL)canDiggLongVideo:(id)a0;
+ (id)disableDiggLongVideoString:(id)a0;
+ (BOOL)canShareLongVideo:(id)a0;
+ (BOOL)canCollectLongVideoAlbum:(id)a0;
+ (id)disableCollectLongVideoAlbumToast:(id)a0;
+ (id)disableShareLongVideoString:(id)a0;
+ (id)disableCommentLongVideoString:(id)a0;


@end
