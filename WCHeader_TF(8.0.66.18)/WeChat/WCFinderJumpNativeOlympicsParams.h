@class NSString, NSData;

@interface WCFinderJumpNativeOlympicsParams : NSObject

@property (copy, nonatomic) NSString *liveNickname;
@property (copy, nonatomic) NSString *liveUsername;
@property (copy, nonatomic) NSString *byPassInfoString;
@property (retain, nonatomic) NSData *byPassInfo;
@property (nonatomic) long long relayIndex;
@property (copy, nonatomic) NSString *liveHeadUrl;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
