@class NSNumber, AWEMusicDetailInspirationQuickFlashBodyModel;

@interface AWEMusicDetailInspirationQuickFlashResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) AWEMusicDetailInspirationQuickFlashBodyModel *quickFlashBodyModel;

+ (id)quickFlashBodyModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
