@class NSArray, NSString, NSDictionary, NSNumber;

@interface AWELiveShelfCardElementLabelModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) BOOL needKeep;
@property (retain, nonatomic) NSArray *content;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSNumber *paddingLeft;
@property (copy, nonatomic) NSNumber *paddingRight;
@property (copy, nonatomic) NSNumber *paddingTop;
@property (copy, nonatomic) NSNumber *paddingBottom;
@property (nonatomic) BOOL needTapTracking;
@property (copy, nonatomic) NSString *linkUrl;
@property (copy, nonatomic) NSDictionary *trackingParams;
@property (nonatomic) BOOL skipOverflowContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
