@class NSString;

@interface AWESelectEpisodeButtonModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titlePrefix;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
