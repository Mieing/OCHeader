@class NSString, NSDictionary, IESLiveImage, NSNumber;

@interface IESLiveKTVSEIOrderInfo : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *mixUserID;
@property (readonly, copy, nonatomic) NSString *mixAnchorID;
@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) IESLiveImage *avatarThumb;
@property (copy, nonatomic) NSString *songTitle;
@property (retain, nonatomic) NSNumber *anchorID;
@property (nonatomic) unsigned long long ksongSecondLyric;
@property (nonatomic) unsigned long long ktvLyric;
@property (copy, nonatomic) NSString *highScoreSongCount;
@property (retain, nonatomic) NSString *author;
@property (nonatomic) unsigned long long duration;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarThumbJSONTransformer;
+ (id)userIDJSONTransformer;
+ (id)modelFromPBModel:(id)a0;
+ (id)anchorIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
