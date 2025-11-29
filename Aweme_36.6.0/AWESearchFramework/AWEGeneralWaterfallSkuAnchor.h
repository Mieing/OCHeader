@class NSDictionary, NSString;

@interface AWEGeneralWaterfallSkuAnchor : AWEGeneralWaterfallAnchor

@property (retain, nonatomic) NSDictionary *productInfo;
@property (copy, nonatomic) NSString *enterFrom;

+ (double)heightForModel:(id)a0;
+ (id)parseExtraString:(id)a0;

- (void)didStartShowing;
- (id)p_getTrackParams;
- (void)singleTapped:(id)a0;
- (id)getAnchorIconURLList;
- (id)getAnchorIconImage;
- (id)getAnchorText;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
