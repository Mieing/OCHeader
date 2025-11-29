@class NSString;

@interface AWEPhotoLoadingStyleConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *btnTitle;
@property (copy, nonatomic) NSString *memoryTitle;
@property (copy, nonatomic) NSString *aggregatingTips;
@property (copy, nonatomic) NSString *agreeTitle;
@property (copy, nonatomic) NSString *agreeLink;
@property (copy, nonatomic) NSString *aggregateURL;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *geckoName;
@property (copy, nonatomic) NSString *aggregatePath;
@property (copy, nonatomic) NSString *downloadPath;
@property (nonatomic) long long maxCount;
@property (nonatomic) double maxTime;
@property (nonatomic) double downloadMinTime;
@property (nonatomic) double downloadMaxTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
