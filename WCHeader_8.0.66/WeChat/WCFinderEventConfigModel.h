@class NSString;

@interface WCFinderEventConfigModel : NSObject

@property (copy, nonatomic) NSString *finderNickname;
@property (copy, nonatomic) NSString *eventName;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
