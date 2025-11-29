@class AWEIMWatchOnceResourceInfo;

@interface AWEIMWatchOnceVideoDetailInfo : IESIMBaseApiModel

@property (retain, nonatomic) AWEIMWatchOnceResourceInfo *showOnceInfo;

+ (id)showOnceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
