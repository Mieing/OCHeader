@class NSString, NSDictionary;

@interface HTSLiveRoomUserInfoModel : IESLiveDynamicModel

@property (nonatomic) unsigned long long feedLayoutStyle;
@property (copy, nonatomic) NSString *feedLayoutTrackString;
@property (copy, nonatomic) NSString *trackReference;
@property (copy, nonatomic) NSString *commonLabelList;
@property (nonatomic) long long enterReference;
@property (nonatomic) BOOL swipeEnterRoom;
@property (copy, nonatomic) NSString *subTrack;
@property (nonatomic) long long subTrackSource;
@property (retain, nonatomic) NSDictionary *trackMeta;

- (BOOL)isValidInfo;
- (void).cxx_destruct;

@end
