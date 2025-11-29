@class AWEIMEmoticonModel, AWEIMCacheableImageRenderModel, NSString;

@interface AWEIMCardBelowQuickEmoticonRenderModel : NSObject

@property (retain, nonatomic) AWEIMEmoticonModel *emoticonModel;
@property (retain, nonatomic) AWEIMCacheableImageRenderModel *imageRenderModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *logid;
@property (nonatomic) long long renderIndex;

- (void).cxx_destruct;

@end
