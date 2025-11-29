@class NSString;

@interface AWEHPBubbleLabelLinkContentConfig : NSObject <AWEHomePageBubbleContentConfigProtocol>

@property (readonly, copy, nonatomic) NSString *contentText;
@property (readonly, copy, nonatomic) NSString *linkText;
@property (readonly, nonatomic) BOOL linkClickAble;
@property (readonly, copy, nonatomic) id /* block */ linkClickCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
