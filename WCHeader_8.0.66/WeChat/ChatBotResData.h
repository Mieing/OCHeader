@class NSMutableDictionary;

@interface ChatBotResData : NSObject

@property (retain, nonatomic) NSMutableDictionary *stringMap;
@property (retain, nonatomic) NSMutableDictionary *svgMap;
@property (retain, nonatomic) NSMutableDictionary *imageMap;
@property (retain, nonatomic) NSMutableDictionary *optionsMap;

- (void)clear;
- (void).cxx_destruct;

@end
