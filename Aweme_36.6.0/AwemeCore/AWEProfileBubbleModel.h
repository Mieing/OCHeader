@class UIImage, NSString, NSDictionary;

@interface AWEProfileBubbleModel : NSObject <AWEProfileBubbleModelProtocol>

@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *linkString;
@property (retain, nonatomic) NSDictionary *customInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
