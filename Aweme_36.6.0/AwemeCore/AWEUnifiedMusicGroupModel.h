@class NSString, NSNumber, AWEURLModel;

@interface AWEUnifiedMusicGroupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *songID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) AWEURLModel *mediaCoverURL;
@property (copy, nonatomic) NSString *UGID;
@property (copy, nonatomic) NSNumber *userCount;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *majorUGID;
@property (copy, nonatomic) NSString *minorUGID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)majorUGIDJSONTransformer;
+ (id)minorUGIDJSONTransformer;
+ (id)musicIdJSONTransformer;
+ (id)UGIDJSONTransformer;
+ (id)mediaCoverURLJSONTransformer;
+ (id)songIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
