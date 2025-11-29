@class NSString, NSArray, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaTrackAnchor : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ link;
    void /* function */ text;
    void /* function */ type;
    void /* function */ textList;
}

@property (nonatomic, copy) NSString *link;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *image;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSArray *textList;
@property (nonatomic) long long truncPos;
@property (nonatomic, readonly) BOOL isYearEnd;
@property (nonatomic, readonly) BOOL isVlpAnchor;
@property (nonatomic, readonly) BOOL isMutualFriendAnchor;
@property (nonatomic, readonly) BOOL isHighValueRelationAnchor;
@property (nonatomic) long long priority;

+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
