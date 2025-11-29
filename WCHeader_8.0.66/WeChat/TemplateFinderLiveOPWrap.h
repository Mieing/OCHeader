@class NSString;

@interface TemplateFinderLiveOPWrap : NSObject <YYModel>

@property (nonatomic) unsigned long long uFeedID;
@property (nonatomic) unsigned long long uliveID;
@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *liveID;
@property (copy, nonatomic) NSString *forcePushInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)finderLiveOPWrapWithJSON:(id)a0;

- (void).cxx_destruct;

@end
