@class IESECHeadVideoExtraInfoModel, NSString, NSDictionary, UIImage, IESECImageModel, NSNumber;

@interface IESECHeadVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *apiStr;
@property (nonatomic) BOOL useV2Play;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *mainVideoPlayURL;
@property (copy, nonatomic) NSString *backupVideoPlayURL;
@property (retain, nonatomic) NSNumber *videoWidth;
@property (retain, nonatomic) NSNumber *videoHeight;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *autoPlay;
@property (nonatomic) BOOL autoPlayForBiz;
@property (retain, nonatomic) NSNumber *isMute;
@property (retain, nonatomic) NSNumber *expireTime;
@property (retain, nonatomic) NSString *coverImageURL;
@property (retain, nonatomic) IESECImageModel *coverImage;
@property (retain, nonatomic) UIImage *localVideoCoverImage;
@property (retain, nonatomic) NSString *localVideoFileURL;
@property (retain, nonatomic) NSNumber *sourceType;
@property (nonatomic) double continuePlayTime;
@property (nonatomic) BOOL preventContinuePlay;
@property (copy, nonatomic) NSDictionary *playOptModel;
@property (nonatomic) long long tabType;
@property (retain, nonatomic) IESECHeadVideoExtraInfoModel *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
