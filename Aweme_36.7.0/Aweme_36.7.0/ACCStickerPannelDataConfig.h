@class NSString, NSArray, NSDictionary;

@interface ACCStickerPannelDataConfig : NSObject <NSCopying>

@property (nonatomic) BOOL shouldUseRecommend;
@property (copy, nonatomic) NSString *zipURI;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSArray *filterTags;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *customPanelName;
@property (copy, nonatomic) NSString *customEmojiPanelName;

- (BOOL)hasFilterUploadImageSticker;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
