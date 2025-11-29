@class IESLiveEmojiTextParser, NSDictionary;
@protocol IESLiveUserService, IESLiveWebImageService, IESLiveRoomService, HTSLiveTemplateProviderAdapter;

@interface IESLiveDanmakuNodeBaseStrategy : NSObject

@property (retain, nonatomic) id metaData;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiTextParser;
@property (retain, nonatomic) id<HTSLiveTemplateProviderAdapter> templateProvider;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;
@property (retain, nonatomic) NSDictionary *danmakuSettingsDic;

- (id)buildData;
- (long long)buildingMode;
- (void)AsyncBuildData:(id /* block */)a0;
- (BOOL)filterWithParams:(id)a0;
- (id)initWithMetaData:(id)a0 diContext:(id)a1;
- (id)buildAttrCreateParamsWithDisplayText:(id)a0;
- (void).cxx_destruct;
- (BOOL)filter;

@end
