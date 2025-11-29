@class NSString;

@interface DanceUICollectionViewUnexpectedReusableView : UICollectionReusableView

@property (copy, nonatomic) NSString *elementKind;

+ (void)danceui_preload;

- (id)_elementKind;
- (BOOL)_wasDequeued;
- (id)initWithElementKind:(id)a0;
- (BOOL)danceuiWasDequeued;
- (id)danceuiElementKind;
- (void).cxx_destruct;

@end
