@class NSString;

@interface GameCenterEntranceInfo : NSObject

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) long long entranceNotifyType;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) BOOL isIconRoundCorner;
@property (nonatomic) unsigned int cornerRadius;
@property (nonatomic) int basicType;
@property (nonatomic) BOOL ignoreLocalControl;
@property (retain, nonatomic) NSString *coloredText;
@property (retain, nonatomic) NSString *jumpLiveJsonStr;
@property (retain, nonatomic) NSString *outerColoredText;
@property (retain, nonatomic) NSString *clickOpenUrl;
@property (nonatomic) long long openType;
@property (nonatomic) long long entranceIconType;

- (void).cxx_destruct;

@end
