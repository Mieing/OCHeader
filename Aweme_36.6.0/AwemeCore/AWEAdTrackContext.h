@class NSString, NSDictionary, AWEAwemeModel, NSNumber;

@interface AWEAdTrackContext : NSObject <IESECAdTrackContext, IESIMAdTrackContextProtocol, NSCopying>

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *refer;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *videoLength;
@property (retain, nonatomic) NSNumber *percent;
@property (retain, nonatomic) NSNumber *volumn;
@property (retain, nonatomic) NSNumber *loopTimes;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *trackLabel;
@property (copy, nonatomic) NSNumber *adID;
@property (copy, nonatomic) NSString *comment_extra;
@property (copy, nonatomic) NSString *union_user_id;
@property (copy, nonatomic) NSString *byteUnionUserId;
@property (copy, nonatomic) NSString *byteLaunchFrom;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned char useByteAdSDK;
@property (nonatomic) BOOL nonStandardAd;
@property (retain, nonatomic) NSNumber *isAdEvent;
@property (copy, nonatomic) NSString *awesomeSplashAdId;
@property (copy, nonatomic) NSString *currentType;
@property (nonatomic) long long movedFloorCount;
@property (nonatomic) long long relativePosition;
@property (copy, nonatomic) NSString *role;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL manuallyTrack3rdPartyURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
