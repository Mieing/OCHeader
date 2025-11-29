@class NSString, NSNumber;

@interface AWEFlashMobFlashJoinBtnConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *stickerJoinLineColor;
@property (nonatomic) BOOL stickerJoinIconShow;
@property (copy, nonatomic) NSString *stickerJoinIconURL;
@property (retain, nonatomic) NSNumber *stickerJoinBtnHeight;
@property (retain, nonatomic) NSNumber *stickerJoinMarginBottom;
@property (retain, nonatomic) NSNumber *stickerJoinMarginLeft;
@property (retain, nonatomic) NSNumber *stickerJoinMarginRight;
@property (retain, nonatomic) NSNumber *stickerJoinMarginTop;
@property (copy, nonatomic) NSString *stickerJoinTextFeed;
@property (copy, nonatomic) NSString *stickerJoinTextStudio;
@property (copy, nonatomic) NSString *stickerJoinTextColor;
@property (retain, nonatomic) NSNumber *stickerJoinTextSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
