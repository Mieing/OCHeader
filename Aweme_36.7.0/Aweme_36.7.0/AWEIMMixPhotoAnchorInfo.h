@class NSString, NSNumber;

@interface AWEIMMixPhotoAnchorInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSNumber *anchorType;
@property (copy, nonatomic) NSString *anchorTitle;
@property (copy, nonatomic) NSString *anchorTag;
@property (copy, nonatomic) NSString *anchorIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
