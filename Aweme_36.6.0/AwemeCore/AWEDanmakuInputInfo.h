@class NSString, AWEVideoPlayDanmakuModel, AWEAwemeModel, AWEDanmakuPendantMaterial;

@interface AWEDanmakuInputInfo : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *replyDanmakuModel;
@property (retain, nonatomic) AWEDanmakuPendantMaterial *pendantMaterial;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isHorizontalScreenStyle;

- (void).cxx_destruct;

@end
