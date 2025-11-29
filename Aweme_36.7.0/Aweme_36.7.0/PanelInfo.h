@class NSString, NSMutableDictionary;

@interface PanelInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *showPath;
@property (retain, nonatomic) NSMutableDictionary *itemDots;
@property (readonly, nonatomic) unsigned long long itemDots_Count;
@property (retain, nonatomic) NSMutableDictionary *itemBubbles;
@property (readonly, nonatomic) unsigned long long itemBubbles_Count;

+ (id)descriptor;

@end
