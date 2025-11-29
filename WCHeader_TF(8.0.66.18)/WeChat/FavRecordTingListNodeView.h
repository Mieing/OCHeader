@class NSString;

@interface FavRecordTingListNodeView : FavRecordLeftThumbRightLabelNodeView <MMImageLoaderObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addContentSubView;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;

@end
