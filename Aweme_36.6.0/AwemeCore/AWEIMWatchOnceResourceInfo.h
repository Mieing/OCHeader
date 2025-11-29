@class AWEIMWatchOnceVideoResourceInfo, NSArray, NSString, AWEIMWatchOncePosterResourceInfo;

@interface AWEIMWatchOnceResourceInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMWatchOncePosterResourceInfo *poster;
@property (retain, nonatomic) AWEIMWatchOnceVideoResourceInfo *video;
@property (copy, nonatomic) NSArray *checkPics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoJSONTransformer;
+ (id)posterJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
