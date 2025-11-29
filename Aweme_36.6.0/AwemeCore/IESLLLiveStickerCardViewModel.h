@class NSDictionary, IESLLLiveStickerDataModel;

@interface IESLLLiveStickerCardViewModel : NSObject

@property (copy, nonatomic) NSDictionary *originCardData;
@property (readonly, nonatomic) IESLLLiveStickerDataModel *model;

- (void)p_trackerWithEvent:(id)a0 params:(id /* block */)a1 btmInfo:(id)a2;
- (void)updateCardModel:(id)a0 originCardData:(id)a1;
- (id)initWithCardModel:(id)a0 originCardData:(id)a1;
- (void).cxx_destruct;

@end
