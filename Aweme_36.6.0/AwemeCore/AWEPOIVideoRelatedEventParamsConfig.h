@class NSString, NSDictionary;

@interface AWEPOIVideoRelatedEventParamsConfig : NSObject

@property (copy, nonatomic) NSString *enterMethodForFirstEnter;
@property (copy, nonatomic) NSString *enterMethodForSlide;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) unsigned long long eventType;

+ (id)firstClickEnterMethodKey;
+ (id)slideEnterMethodKey;
+ (id)extraParamsKeyInLogExtraTrackerData;
+ (id)eventTypeKey;
+ (id)configInstanceFromDictionary:(id)a0;
+ (id)configsArrayKeyInLogExtraPOIVideoPlayDictionary;
+ (id)videoPlayEventKey;

- (void).cxx_destruct;
- (id)convertToDictionary;

@end
