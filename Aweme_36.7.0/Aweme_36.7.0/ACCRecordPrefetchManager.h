@class IESEffectModel;

@interface ACCRecordPrefetchManager : NSObject

@property (nonatomic) BOOL isFetchingHotSticker;
@property (retain, nonatomic) IESEffectModel *hotSticker;
@property (copy, nonatomic) id /* block */ hotPropCompletionBlock;

+ (id)sharedManager;

- (BOOL)needPrefetchHotPropWithPublishViewModel:(id)a0;
- (id)fistHotEffectFromCategoryResponseModel:(id)a0;
- (void)prefetchRecordFirstHotPropWithPublishViewModel:(id)a0;
- (void)retrievePrefetchHotPropWithPublishViewModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
