@class NSString, NSArray;

@interface MMWebPrefetchHtmlTagInfo : MMObject

@property (copy, nonatomic) NSString *htmlTag;
@property (copy, nonatomic) NSString *src;
@property (copy, nonatomic) NSString *fullSrc;
@property (retain, nonatomic) NSArray *arrAttr;

- (void).cxx_destruct;

@end
