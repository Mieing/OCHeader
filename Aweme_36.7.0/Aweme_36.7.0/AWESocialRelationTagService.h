@class NSString;

@interface AWESocialRelationTagService : HTSService <AWESocialRelationTagService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableTagUIUpdate;
- (id)mateTagText;
- (id)mateTagBGColor;
- (id)closeFriendTagText;
- (id)closeFriendTagBGColor;
- (id)closeFriendTagColor;
- (id)mateTagColor;
- (id)getColorWithColorStr:(id)a0;

@end
