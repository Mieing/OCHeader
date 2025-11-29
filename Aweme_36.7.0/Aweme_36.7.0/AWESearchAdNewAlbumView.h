@class NSString, AWESearchAdAlbumGridView, AWESearchAdImagesSliderView;

@interface AWESearchAdNewAlbumView : UIView <AWESearchAdNewAlbumViewProtocol>

@property (retain, nonatomic) AWESearchAdImagesSliderView *albumSliderView;
@property (retain, nonatomic) AWESearchAdAlbumGridView *albumGridView;
@property (copy, nonatomic) id /* block */ albumTappedWithIndex;
@property (copy, nonatomic) id /* block */ albumSliderCheckMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
