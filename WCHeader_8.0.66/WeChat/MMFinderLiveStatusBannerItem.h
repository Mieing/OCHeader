@class UIView;

@interface MMFinderLiveStatusBannerItem : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) id /* block */ willShow;
@property (copy, nonatomic) id /* block */ didDisappear;

+ (id)buildStatusBannerItem:(unsigned int)a0 view:(id)a1;

- (void).cxx_destruct;

@end
