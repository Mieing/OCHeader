@class NSDictionary, AWELiveLocalLifeStickerDataModel, AWEAwemeModel;

@interface AWELiveStickerCardViewModel : NSObject

@property (copy, nonatomic) NSDictionary *originCardData;
@property (readonly, nonatomic) AWELiveLocalLifeStickerDataModel *model;
@property (readonly, nonatomic) AWEAwemeModel *awemeModel;

- (void)p_trackerWithEvent:(id)a0 params:(id /* block */)a1 btmInfo:(id)a2;
- (id)initWithCardModel:(id)a0 awemeModel:(id)a1 originCardData:(id)a2;
- (void)updateCardModel:(id)a0 originCardData:(id)a1;
- (void).cxx_destruct;

@end
