@class NSString, NSDictionary, AWEAwemeModel, AWEGoodsTrackObject;

@interface AWEGoodsEnterFullScreenRequest : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *goodsID;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) AWEGoodsTrackObject *enterProductDetailTrackObject;

- (void).cxx_destruct;

@end
