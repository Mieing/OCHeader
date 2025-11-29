@class GameTagInfoV2, ContentTypeTagInfoV2;

@interface GameTagSetStructV2 : GPBMessage

@property (nonatomic) BOOL isGame;
@property (nonatomic) BOOL hasIsGame;
@property (retain, nonatomic) GameTagInfoV2 *gameNameTag;
@property (nonatomic) BOOL hasGameNameTag;
@property (retain, nonatomic) ContentTypeTagInfoV2 *contentTypeTag;
@property (nonatomic) BOOL hasContentTypeTag;

+ (id)descriptor;

- (id)contentTypeTag;
- (id)gameNameTag;
- (BOOL)isGame;

@end
