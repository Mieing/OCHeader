@class NSString, AWEDTOStoryMovieBottomColorData;

@interface AWEDTOSocialData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long extraSocialExpressType;
@property (copy, nonatomic) NSString *deliveredMusicId;
@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *schoolId;
@property (nonatomic) long long distributeCircle;
@property (nonatomic) BOOL fakeDistributeCircle;
@property (retain, nonatomic) AWEDTOStoryMovieBottomColorData *movieModeBgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)movieModeBgColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
