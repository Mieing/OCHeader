@class NSString, NSArray;

@interface AWEStickerSectionModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isSupportPagingLoad) BOOL supportPagingLoad;
@property (copy, nonatomic) NSArray *stickers;

- (id)initWithName:(id)a0 stickers:(id)a1;
- (void).cxx_destruct;

@end
