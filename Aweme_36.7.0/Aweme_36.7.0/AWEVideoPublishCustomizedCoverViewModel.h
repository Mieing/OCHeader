@class NSString, NSDictionary, UIImage, IESEffectModel;

@interface AWEVideoPublishCustomizedCoverViewModel : NSObject

@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *monitorEventName;
@property (copy, nonatomic) NSString *coverFrom;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (copy, nonatomic) IESEffectModel *sticker;
@property (copy, nonatomic) NSString *stickerExtraParams;
@property (nonatomic) BOOL useBackground;
@property (nonatomic) BOOL enable;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
