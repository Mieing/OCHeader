@class NSString, IESGCPPBGameImageBundler;

@interface IESGCPPBGameDetailCommonStyleHeaderInfo : GPBMessage

@property (retain, nonatomic) IESGCPPBGameImageBundler *headerBgImage;
@property (nonatomic) BOOL hasHeaderBgImage;
@property (copy, nonatomic) NSString *headerBgColor;
@property (nonatomic) long long headerBgColorStyle;
@property (nonatomic) long long placeholderImageStrategy;
@property (nonatomic) long long isNewHeadImageSize;

+ (id)descriptor;

@end
