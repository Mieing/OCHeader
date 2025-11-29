@class NSArray;

@interface ACCIMStickerDataManager : NSObject

@property (copy, nonatomic) NSArray *categoryModels;

+ (void)destroyInstance;
+ (id)shareInstance;

- (id)dataRequestWithCategory:(id)a0;
- (id)convertInnerModelsWith:(id)a0;
- (void)fetchAllIMStoreStickerWithCompletion:(id /* block */)a0;
- (id)imStickerList;
- (void).cxx_destruct;

@end
