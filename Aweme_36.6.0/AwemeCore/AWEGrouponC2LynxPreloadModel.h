@class NSString, NSDictionary;

@interface AWEGrouponC2LynxPreloadModel : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *cardData;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) unsigned long long category;
@property (nonatomic) long long createCount;
@property (nonatomic) BOOL hasPreload;
@property (nonatomic) long long unloadCoverImage;
@property (nonatomic) long long cardType;

- (void).cxx_destruct;

@end
