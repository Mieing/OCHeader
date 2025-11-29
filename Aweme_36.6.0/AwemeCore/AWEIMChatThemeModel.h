@class AWEIMChatBackgroundModel, NSString, AWEIMChatThemeBubbleModel, UIImage;

@interface AWEIMChatThemeModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) AWEIMChatBackgroundModel *currentBackground;
@property (retain, nonatomic) AWEIMChatBackgroundModel *originBackground;
@property (retain, nonatomic) AWEIMChatThemeBubbleModel *bubbleModel;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *itemURL;
@property (copy, nonatomic) NSString *darkItemURL;
@property (nonatomic) BOOL isLocked;
@property (copy, nonatomic) NSString *lockedTitle;
@property (copy, nonatomic) NSString *setterUid;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) AWEIMChatBackgroundModel *customBackgroundModel;
@property (retain, nonatomic) UIImage *customBackgroundImage;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentBackgroundJSONTransformer;
+ (id)originBackgroundJSONTransformer;
+ (id)bubbleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
