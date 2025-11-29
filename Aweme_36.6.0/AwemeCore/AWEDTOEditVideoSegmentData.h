@class NSString, AWEDTOVideoCutInfo;

@interface AWEDTOEditVideoSegmentData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *videoPath;
@property (retain, nonatomic) AWEDTOVideoCutInfo *videoCutInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoCutInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
