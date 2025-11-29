@class NSString, NSMutableString;
@protocol CMHTMLElementTransformer;

@interface CMHTMLElement : NSObject

@property (readonly, nonatomic) id<CMHTMLElementTransformer> transformer;
@property (readonly, nonatomic) NSString *tagName;
@property (readonly, nonatomic) NSMutableString *buffer;

- (void).cxx_destruct;
- (id)initWithTransformer:(id)a0;

@end
