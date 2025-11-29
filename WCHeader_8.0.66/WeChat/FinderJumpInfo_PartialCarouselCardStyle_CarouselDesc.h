@class NSString, NSMutableArray;

@interface FinderJumpInfo_PartialCarouselCardStyle_CarouselDesc : WXPBGeneratedMessage

@property (nonatomic) unsigned int carouselTime;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned long long countdownEndTs;
@property (retain, nonatomic) NSString *beforeCountdownPreText;
@property (retain, nonatomic) NSString *afterCountdownPreText;
@property (retain, nonatomic) NSMutableArray *subDescs;

+ (void)initialize;

@end
