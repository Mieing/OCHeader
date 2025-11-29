@class NSString;

@interface AWEDetailAwemeListConfigurationImpl : NSObject <AWEDetailAwemeListConfiguration>

@property (nonatomic) long long numberOfCellsPerRow;
@property (nonatomic) struct CGSize { double width; double height; } awemeCellSize;
@property (nonatomic) struct CGSize { double width; double height; } lastCellSize;
@property (readonly, nonatomic) double minimumLineSpacing;
@property (readonly, nonatomic) double minimumInteritemSpacing;
@property (readonly, nonatomic) unsigned long long coverLoadOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureAwemeCell:(id)a0 withModel:(id)a1;
- (void)configureAwemeCell:(id)a0 withModel:(id)a1 coverLoadCompletion:(id /* block */)a2;
- (void)configureAwemeCell:(id)a0 withItemModel:(id)a1;
- (void)configureAwemeCell:(id)a0 withItemModel:(id)a1 coverLoadCompletion:(id /* block */)a2;
- (void)configureLeftTopLabel:(id)a0 withItemModel:(id)a1;
- (struct CGSize { double x0; double x1; })awemeCellSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })lastCellSize:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfCellsPerRowWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)cellShowDigg:(id)a0 withModel:(id)a1;

@end
