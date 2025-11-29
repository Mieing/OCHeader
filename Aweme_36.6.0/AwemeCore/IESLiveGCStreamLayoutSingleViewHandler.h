@class IESLiveGCStreamLayoutInputInfo, NSArray;

@interface IESLiveGCStreamLayoutSingleViewHandler : IESLiveGCStreamLayoutBaseHandler

@property (retain, nonatomic) IESLiveGCStreamLayoutInputInfo *lastInputInfo;
@property (copy, nonatomic) NSArray *serviceArray;

- (void)handleLayoutWith:(id)a0 layoutResult:(id /* block */)a1;
- (void)resetLayoutCache;
- (unsigned long long)viewRepresentationType;
- (void)_registerServices;
- (void).cxx_destruct;
- (id)init;

@end
