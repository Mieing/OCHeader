@class WCAdConversionOnlineEventBizModel, WCAdConversionOnlineEventExtModel;

@interface WCAdConversionOnlineEventModel : NSObject

@property (nonatomic) int seq;
@property (nonatomic) unsigned long long ts;
@property (nonatomic) int ei;
@property (nonatomic) int vl;
@property (retain, nonatomic) WCAdConversionOnlineEventExtModel *ext;
@property (retain, nonatomic) WCAdConversionOnlineEventBizModel *biz;

- (id)init;
- (void).cxx_destruct;

@end
