@class NSString, AWEAnchorTrackModel;

@interface AWEAnchorButton : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) AWEAnchorTrackModel *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
