@class NSString, IESLiveText;

@interface IESLiveGiftExhibitionBanner_UniverseInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL valid;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) IESLiveText *subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (retain, nonatomic) IESLiveText *content;
@property (nonatomic) BOOL hasContent;

+ (id)descriptor;

@end
