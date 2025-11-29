@class NSString, AWEAwemeModel;

@interface APCDTODuetMovieExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
