@class NSString;

@interface BDPToastPluginModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *localImagePath;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) long long duration;
@property (nonatomic) long long maxLine;
@property (nonatomic) long long iconType;
@property (nonatomic) BOOL mask;
@property (nonatomic) long long cornerRedius;
@property (copy, nonatomic) id /* block */ dismissHandler;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
