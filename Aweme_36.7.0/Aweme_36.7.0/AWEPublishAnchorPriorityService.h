@class NSString;

@interface AWEPublishAnchorPriorityService : NSObject <ACCPublishAnchorPriorityService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canReplaceWithOriginAnchorType:(long long)a0 originSubType:(long long)a1 originScene:(id)a2 newAnchorType:(long long)a3 newSubType:(long long)a4 newScene:(id)a5 publishModel:(id)a6;
- (BOOL)canReplaceWithOriginAnchorType:(long long)a0 newAnchorType:(long long)a1 publishModel:(id)a2;
- (id)priorityList;
- (BOOL)existPoiInfo:(id)a0;
- (long long)priorityForAnchorInfo:(id)a0 inPriorityList:(id)a1;

@end
