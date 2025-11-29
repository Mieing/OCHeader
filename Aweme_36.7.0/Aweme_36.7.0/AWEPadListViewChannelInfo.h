@class NSString, NSArray;

@interface AWEPadListViewChannelInfo : MTLModel <MTLJSONSerializing, AWEPadPolymericChannelModelProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL navibarPaddingEnable;
@property (nonatomic) BOOL adapterLightMode;
@property (nonatomic) BOOL useMultiLayout;
@property (nonatomic) BOOL enableCache;
@property (nonatomic) BOOL shouldShowWatchTogetherFloatButton;
@property (retain, nonatomic) NSArray *badgeArray;
@property (retain, nonatomic) NSArray *bubbleArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)badgeArrayJSONTransformer;
+ (id)bubbleArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
