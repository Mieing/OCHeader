@class NSString, JsApiSourceInfo, WCFinderPushFeedViewProductParams;

@interface WCFinderGetDetailDataItemCGIConfig : NSObject

@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) WCFinderPushFeedViewProductParams *productInfo;
@property (copy, nonatomic) NSString *gMsgId;
@property (retain, nonatomic) JsApiSourceInfo *jsApiSourceInfo;
@property (nonatomic) unsigned long long relatedScene;
@property (copy, nonatomic) NSString *fromSessionId;

- (id)init;
- (void).cxx_destruct;

@end
