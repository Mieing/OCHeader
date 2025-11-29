@class NSString, NSMutableDictionary;

@interface HTSLivePanelDotInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *showPath;
@property (retain, nonatomic) NSMutableDictionary *itemDots;
@property (readonly, nonatomic) unsigned long long itemDots_Count;

+ (id)descriptor;

@end
