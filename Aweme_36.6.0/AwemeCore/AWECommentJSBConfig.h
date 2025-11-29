@class NSArray, NSDictionary;

@interface AWECommentJSBConfig : NSObject

@property (copy, nonatomic) NSArray *longPressPanelCustomConfig;
@property (copy, nonatomic) NSArray *longPressPanelConfig;
@property (copy, nonatomic) NSDictionary *panelCoreContentConfig;
@property (copy, nonatomic) NSDictionary *mediaFeedConfig;

- (void).cxx_destruct;

@end
