@class NSString, NSArray;

@interface AWEStudioCaptionQueryModel : ACCBaseApiModel

@property (retain, nonatomic) NSString *captionId;
@property (nonatomic) long long code;
@property (retain, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *captions;

+ (id)captionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
