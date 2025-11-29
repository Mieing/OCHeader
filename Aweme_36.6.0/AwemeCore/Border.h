@class NSString, HTSLiveImage;

@interface Border : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long level;
@property (retain, nonatomic) HTSLiveImage *thumbIcon;
@property (nonatomic) BOOL hasThumbIcon;
@property (copy, nonatomic) NSString *dressId;

+ (id)descriptor;

@end
