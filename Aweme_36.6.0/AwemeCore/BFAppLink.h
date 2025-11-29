@class NSURL, NSArray;

@interface BFAppLink : NSObject

@property (retain, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSArray *targets;
@property (retain, nonatomic) NSURL *webURL;
@property (nonatomic, getter=isBackToReferrer) BOOL backToReferrer;

+ (id)appLinkWithSourceURL:(id)a0 targets:(id)a1 webURL:(id)a2 isBackToReferrer:(BOOL)a3;
+ (id)appLinkWithSourceURL:(id)a0 targets:(id)a1 webURL:(id)a2;

- (id)initWithIsBackToReferrer:(BOOL)a0;
- (void).cxx_destruct;

@end
