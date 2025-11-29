@class NSNumber, ACCImageAlbumItemModel;

@interface ACCImageItemStruct : NSObject

@property (readonly, nonatomic) ACCImageAlbumItemModel *itemModel;
@property (readonly, nonatomic) NSNumber *index;

+ (id)structWithItemModel:(id)a0 index:(id)a1;

- (id)initWithItemModel:(id)a0 index:(id)a1;
- (void).cxx_destruct;
- (id)itemId;

@end
