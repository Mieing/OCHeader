@class NSString, NSDictionary, NSDate;

@interface AWEECommerceQualityGoodsPageRenderEvent : NSObject

@property (copy, nonatomic) NSString *pageID;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSDate *startRenderDate;
@property (retain, nonatomic) NSDate *endRenderDate;
@property (retain, nonatomic) NSDate *endInteractDate;

- (void).cxx_destruct;

@end
