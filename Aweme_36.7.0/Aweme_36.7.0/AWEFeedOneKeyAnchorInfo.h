@class NSString;

@interface AWEFeedOneKeyAnchorInfo : NSObject <ACCOneKeyAnchorInfoProtocol, NSCopying>

@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *templateTitle;
@property (nonatomic) long long templateSource;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL firstGuide;
@property (nonatomic) BOOL canUseOriginTemplate;
@property (nonatomic) BOOL usingOriginTemplate;
@property (copy, nonatomic) NSString *albumTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)parseEnabled:(id)a0;
+ (id)firstGuideImage:(BOOL)a0;

- (BOOL)shouldUseOriginTemplate;
- (void)markShowedFirstGuide;
- (BOOL)shouldShowFirstGuide;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJson:(id)a0;

@end
