@class NSString;

@interface MMEmoticonHomePageContext : MMEmoticonLiteAppPageContextBase

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int defaultTag;
@property (copy, nonatomic) id /* block */ closedCallback;
@property (nonatomic) unsigned long long searchScene;
@property (nonatomic) BOOL cannotOpenInLimitedMode;
@property (retain, nonatomic) NSString *sessionId;

- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (void).cxx_destruct;

@end
