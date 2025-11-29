@class NSString, NSMutableArray;

@interface MMFinderLiveConnectMicFocusMaskContext : NSObject <CALayerDelegate>

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned long long maxIndex;
@property (nonatomic) BOOL sorted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (void)removeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (id)maskLayer;
- (id)maskCoreImage;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)sortItems;
- (void)drawInContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
