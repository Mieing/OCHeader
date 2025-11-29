@class NSString, NSArray, NSDictionary, NSNumber;
@protocol Optional;

@interface BDARVADVideoInfo : JSONModel

@property (copy, nonatomic) NSString<Optional> *video_id;
@property (copy, nonatomic) NSString<Optional> *video_group_id;
@property (nonatomic) double effectivePlayTime;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double effectiveInspireTime;
@property (copy, nonatomic) NSString<Optional> *type;
@property (copy, nonatomic) NSArray<Optional> *playTrackUrls;
@property (copy, nonatomic) NSArray<Optional> *effectivePlayTrackUrls;
@property (copy, nonatomic) NSArray<Optional> *playOverTrackUrls;
@property (retain, nonatomic) NSNumber<Optional> *duration;
@property (copy, nonatomic) NSString<Optional> *videoModel;
@property (copy, nonatomic) NSDictionary<Optional> *videoCover;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (BOOL)isVertical;
- (void).cxx_destruct;

@end
