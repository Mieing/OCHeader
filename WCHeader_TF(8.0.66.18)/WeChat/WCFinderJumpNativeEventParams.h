@class NSString, NSData;

@interface WCFinderJumpNativeEventParams : NSObject

@property (copy, nonatomic) NSString *eventIdStr;
@property (copy, nonatomic) NSString *byPassInfoString;
@property (retain, nonatomic) NSData *byPassInfo;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (unsigned long long)eventId;
- (void).cxx_destruct;

@end
