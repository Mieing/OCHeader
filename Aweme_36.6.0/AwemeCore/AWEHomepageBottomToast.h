@class NSNumber, NSString, AWEURLModel;

@interface AWEHomepageBottomToast : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *toastType;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *jumpURLTitle;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) AWEURLModel *iconURL;
@property (nonatomic) unsigned long long groupId;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long typeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
