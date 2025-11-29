@class IESECUrlImage, IESECElementImageBubble;

@interface IESECElementImage : GPBMessage

@property (retain, nonatomic) IESECUrlImage *image;
@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) IESECElementImageBubble *bubble;
@property (nonatomic) BOOL hasBubble;

+ (id)descriptor;

@end
