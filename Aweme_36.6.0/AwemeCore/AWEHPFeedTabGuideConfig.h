@class NSArray, AWEFeedTabJumpRollBackConfig, NSString;

@interface AWEHPFeedTabGuideConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) long long preloadSize;
@property (copy, nonatomic) NSArray *supportPages;
@property (retain, nonatomic) AWEFeedTabJumpRollBackConfig *rollBackConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
