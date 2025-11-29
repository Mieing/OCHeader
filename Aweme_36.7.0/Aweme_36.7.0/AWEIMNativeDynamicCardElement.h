@class NSString, NSDictionary;

@interface AWEIMNativeDynamicCardElement : NSObject <NSCopying>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *content;
@property (nonatomic) BOOL isStream;
@property (copy, nonatomic) NSString *link;

- (void)updateTextContent:(id)a0;
- (id)getContentDict;
- (id)getTextContent;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
