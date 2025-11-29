@class NSArray, NSString;
@protocol MMFinderLiveShopShelfHeaderSubInfosViewLoadDelegate;

@interface MMFinderLiveShopShelfHeaderSubInfosView : UIView <MMWebImageViewDelegate>

@property (retain, nonatomic) NSArray *tuples;
@property (weak, nonatomic) id<MMFinderLiveShopShelfHeaderSubInfosViewLoadDelegate> delegate;
@property (readonly, nonatomic) BOOL isEmpty;
@property (copy, nonatomic) id /* block */ onScoreClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)addLine;
- (void)updateWithShopWindowInfo:(id)a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
