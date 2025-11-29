@class NSString, VideoPlayInfo;

@interface VideoInfo : NSObject

@property (copy, nonatomic) NSString *assetLink;
@property (retain, nonatomic) VideoPlayInfo *p360;
@property (retain, nonatomic) VideoPlayInfo *p480;
@property (retain, nonatomic) VideoPlayInfo *p720;

- (id)initWithAssetLink:(id)a0 p360:(id)a1 p480:(id)a2 p720:(id)a3;
- (void).cxx_destruct;

@end
