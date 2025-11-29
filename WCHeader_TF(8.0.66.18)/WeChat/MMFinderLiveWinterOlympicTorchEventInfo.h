@class NSString, NSData;

@interface MMFinderLiveWinterOlympicTorchEventInfo : NSObject

@property (copy, nonatomic) NSString *eventNickname;
@property (copy, nonatomic) NSString *eventUsername;
@property (copy, nonatomic) NSString *eventWxUsername;
@property (copy, nonatomic) NSString *byPassInfoString;
@property (retain, nonatomic) NSData *byPassInfo;
@property (nonatomic) long long relayIndex;
@property (retain, nonatomic) NSString *avatarUrl;
@property (nonatomic) unsigned long long eventType;

- (void).cxx_destruct;

@end
