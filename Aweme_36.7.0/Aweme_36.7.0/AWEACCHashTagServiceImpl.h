@class NSString;

@interface AWEACCHashTagServiceImpl : NSObject <ACCHashTagServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)endWithHashTagRegExp;
- (id)hashTagRegExp;
- (id)resolveHashTagsWithText:(id)a0;
- (void)handleHashTags:(id)a0 withSpecialHashtags:(id)a1 withPlainText:(id)a2;
- (id)savedPrivateHashtags;
- (id)savedHashtags;
- (void)historySaveHashTags:(id)a0 isPrivate:(BOOL)a1;

@end
