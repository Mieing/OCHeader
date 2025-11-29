@class AWEIMWatchOnceImageResourceInfo;

@interface AWEIMWatchOnceImageDetailInfo : IESIMBaseApiModel

@property (retain, nonatomic) AWEIMWatchOnceImageResourceInfo *showOnceInfo;

+ (id)showOnceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
