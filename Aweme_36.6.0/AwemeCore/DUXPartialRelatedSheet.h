@class NSArray, NSString;
@protocol AWERelatedSheetDelegate;

@interface DUXPartialRelatedSheet : DUXPartialSheet <AWEDisViewDelegate>

@property (retain, nonatomic) NSArray *regions;
@property (weak, nonatomic) id<AWERelatedSheetDelegate> panelDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showUnModalOnViewController:(id)a0 withExpand:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)isExpand;
- (void)foldAnimated:(BOOL)a0;
- (void)updateRegions;
- (void)dismissByAnimation:(BOOL)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)loadView;

@end
