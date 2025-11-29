@class NSString;

@interface WCFinderDynamicRichTextParserItem : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *color;
@property (nonatomic) long long imageId;
@property (retain, nonatomic) NSString *src;
@property (retain, nonatomic) NSString *href;

+ (id)textItem:(id)a0 color:(id)a1;
+ (id)textItem:(id)a0 color:(id)a1 href:(id)a2;
+ (id)iconItem:(long long)a0;
+ (id)iconWithSrc:(id)a0;

- (void).cxx_destruct;

@end
