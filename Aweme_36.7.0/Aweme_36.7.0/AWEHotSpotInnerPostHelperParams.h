@class NSDictionary, NSString, NSArray;

@interface AWEHotSpotInnerPostHelperParams : NSObject

@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSDictionary *mobJsonParams;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *stickerTextInfo;
@property (nonatomic) long long initialScene;
@property (copy, nonatomic) NSString *hotspotWord;
@property (copy, nonatomic) NSString *hotspotId;
@property (copy, nonatomic) NSArray *challengeIds;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *aiEffectID;
@property (nonatomic) BOOL isImageTemplate;

- (void).cxx_destruct;

@end
