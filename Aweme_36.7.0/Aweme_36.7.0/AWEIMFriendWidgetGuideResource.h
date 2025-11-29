@class NSString, AWEIMMD5ResourceFileConfig;

@interface AWEIMFriendWidgetGuideResource : NSObject

@property (retain, nonatomic) AWEIMMD5ResourceFileConfig *fileConfig;
@property (retain, nonatomic) NSString *pipGuideVideoPath;
@property (retain, nonatomic) NSString *guideImagePath;
@property (readonly, nonatomic) BOOL isResourceReady;

- (void)downloadResourcesIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
