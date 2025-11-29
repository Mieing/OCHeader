@class NSString, AWEURLModel;

@interface AWESearchAdStarEndorsementAdvancedInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *imageInfo;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *ironManURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
