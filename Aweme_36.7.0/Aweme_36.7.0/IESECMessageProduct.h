@class IESECProductCover;

@interface IESECMessageProduct : GPBMessage

@property (retain, nonatomic) IESECProductCover *cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) BOOL showIndex;
@property (nonatomic) int index;

+ (id)descriptor;

@end
