@class NSString, FinderJumpInfo, NSMutableArray;

@interface FinderLiveGetPairingTabResponse_PairingImg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) unsigned int imgHeight;
@property (nonatomic) unsigned int imgWidth;
@property (retain, nonatomic) FinderJumpInfo *imgJumpInfo;
@property (retain, nonatomic) NSMutableArray *labelList;

+ (void)initialize;

@end
