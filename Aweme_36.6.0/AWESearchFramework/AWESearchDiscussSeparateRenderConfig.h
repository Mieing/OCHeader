@class NSString;

@interface AWESearchDiscussSeparateRenderConfig : NSObject <AWESearchSeparateRenderConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)separateRenderIndividualOpen;
+ (id)separateBlockList;
+ (id)searchSceneForSeparateRender;
+ (id)separateBlockChannelList;


@end
