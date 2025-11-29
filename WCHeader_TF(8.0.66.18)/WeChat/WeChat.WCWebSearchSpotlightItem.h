@class NSString, NSArray;

@interface WeChat.WCWebSearchSpotlightItem : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ desc;
    void /* unknown type, empty encoding */ keywords;
    void /* unknown type, empty encoding */ feature;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *desc;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSString *feature;

- (id)init;
- (void).cxx_destruct;

@end
