@class NSString, NSArray;

@interface IESLiveAudioMVInfoModel : NSObject

@property (copy, nonatomic) NSString *mvKey;
@property (copy, nonatomic) NSArray *URLListArray;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL needExamine;
@property (copy, nonatomic) NSArray *atmosphereFrameColorData;
@property (nonatomic) BOOL staticBG;
@property (nonatomic) long long startIndex;
@property (nonatomic) unsigned long long mvType;

- (void).cxx_destruct;

@end
