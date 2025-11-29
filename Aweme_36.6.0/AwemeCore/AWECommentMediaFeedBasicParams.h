@class NSString, AWEPageContext;

@interface AWECommentMediaFeedBasicParams : NSObject

@property (readonly, weak, nonatomic) AWEPageContext *preNode;
@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;

- (id)initWithPreNode:(id)a0;
- (void).cxx_destruct;

@end
