@class UIFont, NSString, NSArray, UIColor;

@interface AWECommerceSwiftImpl.FullPageFeedAdLearnMoreItemModel : NSObject <AWECommerceFullPageFeedAdLearnMoreItemModelProtocol> {
    void /* function */ cardIconUrl;
    void /* function */ buttonText;
    void /* function */ cardTitle;
    void /* function */ attachText;
    void /* function */ containerBlock;
}

@property (nonatomic, copy) NSString *cardIconUrl;
@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, copy) NSString *cardTitle;
@property (nonatomic, copy) NSArray *attachText;
@property (nonatomic) BOOL canStartLoopPlayAttachText;
@property (nonatomic) long long loopPlayFrequency;
@property (nonatomic) unsigned long long positionType;
@property (nonatomic) BOOL ctaType;
@property (nonatomic) BOOL tagType;
@property (nonatomic, copy) id /* block */ containerBlock;
@property (nonatomic, retain) UIFont *textFont;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) BOOL isMarqueeType;

- (BOOL)canLoopPlayAttachText;
- (void).cxx_destruct;
- (id)init;

@end
