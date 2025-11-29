@class NSString;

@interface AWEPadCommentPanelAdapter : HTSService <AWEPadCommentPanelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadSplitScreenAdapterClass;
+ (BOOL)Enable;

- (BOOL)enablePadCommentPanel:(id)a0;
- (id)aAWEPadSplitScreenAdapter;

@end
