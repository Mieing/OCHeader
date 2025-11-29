@class NSArray, NSString;

@interface AWEMemoriesPlayerThumbnailViewModel : NSObject <AWEMemoriesPlayerThumbnailService>

@property (copy, nonatomic) NSArray *tileModelsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadWithTileModelsArray:(id)a0;
- (void).cxx_destruct;

@end
