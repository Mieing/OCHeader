@class NSString;

@interface AWEVideoPropMentionStickerModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long mentionID;
@property (nonatomic) float centerX;
@property (nonatomic) float centerY;
@property (nonatomic) float startTime;
@property (nonatomic) float endTime;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL showSticker;
@property (nonatomic) BOOL showTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDTOMentionInfo:(id)a0;
- (id)dtoPropMentionStickerInfo;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
