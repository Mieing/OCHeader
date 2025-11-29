@class NSString;

@interface AWEDanmakuActivityResourcesModel : NSObject

@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlMd5;
@property (copy, nonatomic) NSString *serverMd5;

- (id)initWithUrl:(id)a0 resourceID:(id)a1 urlMd5:(id)a2 serverMd5:(id)a3;
- (void).cxx_destruct;

@end
