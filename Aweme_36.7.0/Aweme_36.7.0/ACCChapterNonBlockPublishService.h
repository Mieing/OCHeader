@class NSString;

@interface ACCChapterNonBlockPublishService : HTSService <ACCChapterNonBlockPublishProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)intelligentChapterNonBlockStyle;
- (BOOL)isIntelligentChapterAutoApplyNewStyle;

@end
