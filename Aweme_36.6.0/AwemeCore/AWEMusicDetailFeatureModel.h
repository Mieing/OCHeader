@class NSString, AWEAwemeModel;

@interface AWEMusicDetailFeatureModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *songName;
@property (copy, nonatomic) NSString *titleName;
@property (retain, nonatomic) AWEAwemeModel *firstAwemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
