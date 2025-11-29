@class NSURL, NSString;

@interface BDWebImageHeaderInterceptionMetaInfo : NSObject

@property (retain, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *pageTag;

- (void).cxx_destruct;

@end
