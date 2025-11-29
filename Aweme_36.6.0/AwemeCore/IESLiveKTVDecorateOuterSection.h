@class NSArray;

@interface IESLiveKTVDecorateOuterSection : IGListSectionController

@property (weak, nonatomic) NSArray *contexts;

- (id)initWithDIContext:(id)a0;
- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
