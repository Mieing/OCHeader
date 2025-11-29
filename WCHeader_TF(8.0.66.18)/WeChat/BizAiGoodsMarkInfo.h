@class NSString, GoodsObject, NSData;

@interface BizAiGoodsMarkInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int trackId;
@property (retain, nonatomic) GoodsObject *obj;
@property (nonatomic) float possibility;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSData *businessBuffer;

+ (void)initialize;

@end
