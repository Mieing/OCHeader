@class IESECLiveGoodsRitTagTrackModel, NSString, NSArray, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveGoodsProductTagModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *activityURL;
@property (nonatomic) long long activityType;
@property (retain, nonatomic) NSNumber *activityID;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSString *banner;
@property (retain, nonatomic) NSNumber *bannerWidth;
@property (retain, nonatomic) NSNumber *bannerHeight;
@property (retain, nonatomic) NSString *urlDoc;
@property (retain, nonatomic) NSArray *textList;
@property (retain, nonatomic) IESECLiveImageURLModel *textIcon;
@property (retain, nonatomic) NSString *trackTag;
@property (retain, nonatomic) NSString *labelName;
@property (nonatomic) long long position;
@property (retain, nonatomic) IESECLiveGoodsRitTagTrackModel *tagTrack;
@property (nonatomic) BOOL realShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagTrackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
