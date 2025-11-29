@class NSArray;

@interface ACCTextStickerKeywordViewModel : NSObject

@property (retain, nonatomic) NSArray *originTexts;

- (id)needUpdateTextKeyword:(id)a0;
- (void)requestTextStickerKeyword:(id)a0 diffIndexsMap:(id)a1 templateId:(id)a2 completion:(id /* block */)a3;
- (void)recordTextStickerOriginContent:(id)a0;
- (void).cxx_destruct;

@end
