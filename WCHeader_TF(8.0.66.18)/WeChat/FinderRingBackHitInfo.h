@class NSString, NSMutableArray;

@interface FinderRingBackHitInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songNameHitInfo;
@property (retain, nonatomic) NSString *singerHitInfo;
@property (retain, nonatomic) NSString *descriptionHitInfo;
@property (retain, nonatomic) NSMutableArray *tagHitInfos;

+ (void)initialize;

@end
