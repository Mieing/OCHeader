@class NSString, NSArray, NSNumber;

@interface IESECLiveImageURLModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageURLString;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlList;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
