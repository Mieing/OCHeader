@class NSString, AWEAwemeModel;

@interface AWERichAwemeGoodTrackInfo : NSObject <AWEGoodsBasicModelProtocol>

@property (weak, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL showCommentPopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoWithModel:(id)a0;

- (id)promotionID;
- (long long)promotionSource;
- (id)reliableImages;
- (id)sales;
- (id)currentImageModel;
- (id)currentFrameTypeString;
- (id)guideInfoArray;
- (id)price;
- (void).cxx_destruct;
- (id)productID;
- (id)title;
- (id)longTitle;

@end
