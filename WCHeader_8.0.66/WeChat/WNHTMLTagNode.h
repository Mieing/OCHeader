@class NSString, NSMutableString, NSDictionary, NSMutableArray, WNContentStorage;

@interface WNHTMLTagNode : NSObject {
    WNContentStorage *m_contentStorage;
}

@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSMutableString *textContent;
@property (retain, nonatomic) NSMutableArray *attributes;
@property (retain, nonatomic) NSDictionary *tagAttributes;
@property (weak, nonatomic) WNHTMLTagNode *parentNode;
@property (retain, nonatomic) NSMutableArray *childNodes;

- (id)initWithTagName:(id)a0 parentNode:(id)a1;
- (void)dealloc;
- (void)addChildNode:(id)a0;
- (void)addAttribute:(id)a0;
- (id)contentStorage;
- (void).cxx_destruct;

@end
