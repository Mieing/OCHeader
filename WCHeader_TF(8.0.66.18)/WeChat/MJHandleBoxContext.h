@class MJImageLayerViewModel, OMJHandleBoxBorderStyle, NSArray;

@interface MJHandleBoxContext : NSObject

@property (readonly, nonatomic) MJImageLayerViewModel *layer;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) OMJHandleBoxBorderStyle *borderStyle;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *titles;
@property (copy, nonatomic) id /* block */ action;

+ (id)defaultTitleWithLayerType:(unsigned long long)a0;

- (id)initWithLayer:(id)a0;
- (id)initWithLayer:(id)a0 options:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (void)handleBoxDeleteItemAction;
- (void)handleBoxEditItemContentAction;
- (void).cxx_destruct;

@end
