@class NSString;

@interface AWEFullPagePicSearchConfig : NSObject <AWEFullPagePicSearchConfigProtocol>

@property (nonatomic) long long showPosition;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *intent;
@property (nonatomic) BOOL shouldShowAnimate;
@property (nonatomic) double animateDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
