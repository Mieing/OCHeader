@class IESECUrlImage;

@interface IESECElementAvatar : GPBMessage

@property (retain, nonatomic) IESECUrlImage *avatar;
@property (nonatomic) BOOL hasAvatar;

+ (id)descriptor;

@end
