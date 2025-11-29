@class NSArray, IESLiveKTVDecorateSubContext;

@interface IESLiveKTVDecorateTagSection : IGListSectionController

@property (weak, nonatomic) IESLiveKTVDecorateSubContext *tagContext;
@property (retain, nonatomic) NSArray *tagModels;

- (id)initWithDIContext:(id)a0;
- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
