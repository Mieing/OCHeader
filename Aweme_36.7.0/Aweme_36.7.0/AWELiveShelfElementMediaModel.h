@class NSString, NSArray, NSNumber;

@interface AWELiveShelfElementMediaModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *linkUrl;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
