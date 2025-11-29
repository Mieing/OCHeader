@class NSString, NSURL;

@interface CameraScanGoodsAdInfo : NSObject

@property (copy, nonatomic) NSString *adUxInfo;
@property (nonatomic) unsigned int adHandID;
@property (copy, nonatomic) NSURL *markDotImageURL;
@property (copy, nonatomic) NSURL *introduceImageURL;
@property (copy, nonatomic) NSURL *bottomBgImageURL;
@property (nonatomic) BOOL isAllResourcesOK;

- (id)adTraceID;
- (void).cxx_destruct;

@end
