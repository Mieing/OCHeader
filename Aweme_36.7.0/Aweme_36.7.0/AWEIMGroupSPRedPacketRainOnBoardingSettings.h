@class NSString, NSArray;

@interface AWEIMGroupSPRedPacketRainOnBoardingSettings : NSObject

@property (readonly, copy, nonatomic) NSString *icon;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) BOOL enableAllInteractiveEmoji;
@property (readonly, copy, nonatomic) NSArray *supportStickerTypes;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
