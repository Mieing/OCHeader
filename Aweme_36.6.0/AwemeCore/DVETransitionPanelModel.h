@class NSArray;

@interface DVETransitionPanelModel : NSObject

@property (readonly, nonatomic) NSArray *data;

- (id)tabModelForIndex:(long long)a0;
- (id)itemModelForIndexPath:(id)a0;
- (id)tabModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
