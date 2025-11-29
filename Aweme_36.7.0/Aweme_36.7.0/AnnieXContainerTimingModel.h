@class NSString;

@interface AnnieXContainerTimingModel : MTLModel <MTLJSONSerializing>

@property long long openTime;
@property (nonatomic) long long firstScreen;
@property (nonatomic) long long createDataStart;
@property (nonatomic) long long createDataEnd;
@property (nonatomic) long long cardDataBuilderStart;
@property (nonatomic) long long cardDataBuilderEnd;
@property (nonatomic) long long bizCardDefaultDataStart;
@property (nonatomic) long long bizCardDefaultDataEnd;
@property (nonatomic) long long bizCardInstanceDataStart;
@property (nonatomic) long long bizCardInstanceDataEnd;
@property (nonatomic) long long contextDataBuilderStart;
@property (nonatomic) long long contextDataBuilderEnd;
@property (nonatomic) long long bizContextDefaultDataStart;
@property (nonatomic) long long bizContextDefaultDataEnd;
@property (nonatomic) long long bizContextInstanceDataStart;
@property (nonatomic) long long bizContextInstanceDataEnd;
@property (nonatomic) long long createCardViewStart;
@property (nonatomic) long long createCardViewEnd;
@property (nonatomic) long long createKitViewStart;
@property (nonatomic) long long createKitViewEnd;
@property (nonatomic) long long prepareComponentJsbStart;
@property (nonatomic) long long prepareComponentJsbEnd;
@property (nonatomic) long long loadStart;
@property (nonatomic) long long seperateRenderStart;
@property (nonatomic) long long seperateRenderEnd;
@property (nonatomic) long long prepareEngineLoadStart;
@property (nonatomic) long long prepareEngineLoadEnd;
@property (nonatomic) long long webviewDecideNavi;
@property (nonatomic) long long webviewCommitNavi;
@property (nonatomic) long long webviewRedirectNavi;
@property (nonatomic) long long prepareTemplateStart;
@property (nonatomic) long long prepareTemplateEnd;
@property (nonatomic) long long engineviewLoadStart;
@property (nonatomic) long long engineviewLoadEnd;
@property (nonatomic) long long verifyTemplateStart;
@property (nonatomic) long long verifyTemplateEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)collectTiming:(id)a0 timestamp:(double)a1;
- (long long)fetchTimingWithKey:(id)a0;
- (id)generalDuration;

@end
