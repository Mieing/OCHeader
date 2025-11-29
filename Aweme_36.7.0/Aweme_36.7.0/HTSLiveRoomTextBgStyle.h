@class NSString;

@interface HTSLiveRoomTextBgStyle : IESLivePBBaseMessage

@property (nonatomic) long long align;
@property (nonatomic) long long fontSize;
@property (copy, nonatomic) NSString *fontFamily;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) long long scroll;
@property (nonatomic) long long scrollSpeed;

+ (id)descriptor;

@end
