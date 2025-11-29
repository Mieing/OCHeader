@class NSString, NSArray;

@interface TTEpubFontFace : NSObject

@property (copy, nonatomic) NSString *font_family;
@property (nonatomic) unsigned long long weight;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *resource;

- (void).cxx_destruct;

@end
