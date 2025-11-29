@class NSString;

@interface AWELiveRoomViewStats : AWEBaseApiModel

@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL incremental;
@property (nonatomic) long long displayVersion;
@property (nonatomic) long long displayValue;
@property (nonatomic) long long displayType;
@property (retain, nonatomic) NSString *displayMiddle;
@property (retain, nonatomic) NSString *displayLong;
@property (nonatomic) BOOL isFromMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
