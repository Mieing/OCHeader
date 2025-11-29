@class NSString;

@interface AWEHotSearchPostAwemeInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *templateID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
