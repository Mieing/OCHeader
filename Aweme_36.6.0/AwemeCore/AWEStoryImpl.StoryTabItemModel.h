@class NSString;

@interface AWEStoryImpl.StoryTabItemModel : NSObject <AWEProfileTabItemProtocol> {
    void /* function */ title;
    void /* unknown type, empty encoding */ isCameraButtonHidden;
    void /* unknown type, empty encoding */ isFromHistoryStory;
    void /* function */ redDotAccessibilityText;
    void /* unknown type, empty encoding */ tabType;
    void /* unknown type, empty encoding */ user;
    void /* unknown type, empty encoding */ controllers;
    void /* unknown type, empty encoding */ plugins;
    void /* unknown type, empty encoding */ isFromUserHomepage;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL showLock;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic, copy) NSString *redDotAccessibilityText;

- (void).cxx_destruct;
- (id)init;

@end
