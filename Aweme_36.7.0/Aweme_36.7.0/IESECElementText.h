@class NSString, IESECUrlImage;

@interface IESECElementText : GPBMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) long long size;
@property (nonatomic) BOOL bold;
@property (retain, nonatomic) IESECUrlImage *background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) long long maxWidth;
@property (nonatomic) BOOL ellipsis;

+ (id)descriptor;

@end
