@class NSString;

@interface AWEEcomPhotoSearchSectionParams : AWEBaseApiModel

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSString *searchId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
