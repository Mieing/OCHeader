@class NSString;

@interface AWEPublishVideoCutTrackParamProvider : NSObject <AWEPublishTrackParamProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)paramsForPublish:(id)a0 publishModel:(id)a1;
- (BOOL)isGraphicsAnchorModel:(id)a0;

@end
