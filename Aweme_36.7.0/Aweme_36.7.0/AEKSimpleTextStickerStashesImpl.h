@class NSArray, NSString;

@interface AEKSimpleTextStickerStashesImpl : NSObject <AEKSimpleTextStickerStashes>

@property (copy, nonatomic) NSArray *stickerTracks;
@property (readonly, copy, nonatomic) NSArray *stickers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStickerTracks:(id)a0;
- (void).cxx_destruct;

@end
