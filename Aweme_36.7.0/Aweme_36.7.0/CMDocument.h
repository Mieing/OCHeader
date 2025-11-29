@class NSURL, CMNode;

@interface CMDocument : NSObject

@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) CMNode *rootNode;
@property (retain, nonatomic) NSURL *linksBaseURL;

- (id)HTMLString;
- (id)initWithString:(id)a0 options:(long long)a1;
- (id)targetURLForNode:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 options:(long long)a1;
- (id)initWithContentsOfFile:(id)a0 options:(long long)a1;

@end
