@class PHAsset, NSString, AWEAwemeModel;
@protocol AWERecallThemeModelProtocol;

@interface AWEMemoriesPlayerModel : NSObject

@property (retain, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) unsigned long long playerModelType;
@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) id<AWERecallThemeModelProtocol> themeModel;

- (id)initWithAwemeModel:(id)a0;
- (id)initWithLocalIdentifier:(id)a0 modelType:(unsigned long long)a1;
- (id)initWithThemeModel:(id)a0;
- (BOOL)validationLocalParams;
- (void).cxx_destruct;
- (id)initWithPHAsset:(id)a0;

@end
