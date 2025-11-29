@class NSString, NSDictionary, IESECTracker, IESECGoodsDetailTracker;

@interface IESECCommentShowConfig : NSObject

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) IESECGoodsDetailTracker *goodsDetailTracker;
@property (weak, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL hideHeader;
@property (copy, nonatomic) NSString *sourceBtmToken;

- (void)trackeEvent:(id)a0 extraParams:(id)a1;
- (void)trackeEvent:(id)a0 extraParams:(id)a1 once:(id)a2;
- (void).cxx_destruct;

@end
