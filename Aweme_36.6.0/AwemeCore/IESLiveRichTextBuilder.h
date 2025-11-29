@class NSDictionary, NSArray;

@interface IESLiveRichTextBuilder : NSObject

@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSArray *richTextModels;

- (id)p_build;
- (void)p_loadAllImagesIfNeeded:(id /* block */)a0;
- (id)p_buildAttributesFrom:(id)a0;
- (void)buildAttributedString:(id /* block */)a0;
- (id)buildFromCache;
- (void).cxx_destruct;
- (id)init;

@end
