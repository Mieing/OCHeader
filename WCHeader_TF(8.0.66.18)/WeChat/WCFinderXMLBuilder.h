@class NSString, NSMutableDictionary;

@interface WCFinderXMLBuilder : NSObject

@property (copy, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSMutableDictionary *elements;

+ (id)builderForTagName:(id)a0;

- (void)addElementWithLabel:(id)a0 content:(id)a1;
- (id)xmlString;
- (void).cxx_destruct;

@end
