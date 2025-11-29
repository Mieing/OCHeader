@class NSDictionary;

@interface AWEIMMixPhotoAIModelInfoViewModel : AWEIMMixPhotoAIModelInfoModel

@property (retain, nonatomic) NSDictionary *loraInfo;
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ enterNextPageBlock;

- (void)updateParams;
- (void)configData:(id)a0;
- (void)refreshDataIfNeed;
- (id)getTrailingImage:(unsigned long long)a0;
- (void)fetchLeadingImageWithURLModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithScene:(unsigned long long)a0;

@end
