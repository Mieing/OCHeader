@class NSString, NSNumber, NSDictionary;

@interface AWEEffectPlatformTrackModel : MTLModel

@property (copy, nonatomic) NSString *trackName;
@property (copy, nonatomic) NSNumber *successStatus;
@property (copy, nonatomic) NSNumber *failStatus;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSString *effectIDKey;
@property (copy, nonatomic) NSString *effectNameKey;
@property (copy, nonatomic) NSDictionary *trackInfoDict;
@property (copy, nonatomic) id /* block */ extraTrackInfoDictBlock;

+ (id)modernStickerTrackModel;

- (void).cxx_destruct;

@end
